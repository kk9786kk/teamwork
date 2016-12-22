#include<stdlib.h>
#include<stdio.h>
#include<string.h>
typedef struct restaurant{
	
	char name[20];
	char menu[100];
	char address[100];
	char phone[11];
	char comment[100];
	
	struct restaurant* next;
	
}RESTAURANT;

RESTAURANT * getnode(){
	
	RESTAURANT *a;
	
	a=(RESTAURANT*)calloc(1,sizeof(RESTAURANT));
	
	return a;

} 

void output(RESTAURANT* shop){
	
	int count=1;
	
	printf("-----------------------\n");
	
	printf("店名:%s\n\n",shop->name);
	
	printf("地址:%s\n\n",shop->address);
	
	printf("菜單:%s\n",shop->menu);
	
	printf("店家電話:%s\n\n",shop->phone);
	
	while(shop->next!=NULL){
		
		printf("評論%d:%s\n",count,shop->comment);
		count++;
		shop=shop->next;
	}
	printf("\n");
	
}

void addcomment(RESTAURANT *shop,char *newcomment){
	
	while(shop->next!=NULL){
		
		shop=shop->next;
	}
	
	strcpy(shop->comment,newcomment);
	
	shop->next=getnode();
	
}

int main(void){
	
	int choose=4; char comment[100];
	
	RESTAURANT *sengi=getnode();
	
	strcpy(sengi->address,"49087台中市西屯區西安街200號");
	
	strcpy(sengi->menu,"排骨飯 75$\n雞排飯 75$\n雞腿飯 75$\n油雞腿飯 75$\n和菜飯 50$\n");
	
	strcpy(sengi->name,"森記便當店");
	
	strcpy(sengi->phone,"04-9487948");
	
	RESTAURANT *mama=getnode();
	
	strcpy(mama->address,"407台中市西屯區西安街201號");
	
	strcpy(mama->menu,"香腸割包 35$\n瘦肉割包 35$\n五花肉割包 35$\n培根割包 35$\n豬排割包 35$\n");
	
	strcpy(mama->name,"胡媽媽割包");
	
	strcpy(mama->phone,"04-0920000");
	
	RESTAURANT *mc=getnode();
	
	strcpy(mc->address,"407台中市西屯區西安街202號");
	
	strcpy(mc->menu,"麥香雞 39$\n卡拉雞 39$\n麥香魚 39$\n勁辣雞腿堡39$\n板烤雞腿堡 39$\n");
	
	strcpy(mc->name,"麥當勞");
	
	strcpy(mc->phone,"04-4066688");
	 
	while(choose!=-1){
		
		printf("1.森記便當店\n2.胡媽媽割包\n3.麥當勞\n\n(跳出請輸入-1)\n請輸入你要的店家資訊代碼:");
	
	    scanf("%d",&choose);
	    
	    if(choose==1){
	    	
	    	output(sengi);
	    	addcomment(sengi,comment);
	    	addcomment(sengi,comment);
		}
	    else if(choose==2){
	    	
	    	output(mama);
		}
		else if(choose==3){
			
			output(mc);
		}
		else if(choose==-1){
			
			printf("byebye");
		}
		else{
			printf("輸入代碼錯誤喔\n");
			
		}
	    
	} 
	
	
	
	
	
}

