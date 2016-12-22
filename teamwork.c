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
	
	RESTAURANT *a=(RESTAURANT*)calloc(1,sizeof(RESTAURANT));
	return a;
} 

void output(RESTAURANT* shop){
	system("CLS");
	int count=1;	
	
	printf("店名:%s\n\n",shop->name);
	printf("地址:%s\n\n",shop->address);	
	printf("菜單:%s\n",shop->menu);	
	printf("店家電話:%s\n\n",shop->phone);
	
	while(shop->next!=NULL){
		
		printf("客戶評論%d:%s\n",count,shop->comment);
		count++;
		shop=shop->next;
	}
	printf("-----------------------\n");
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
	
	int choose=4; 
	char comment[100]={},temp;
	
	RESTAURANT *sengi=getnode();
	strcpy(sengi->address,"407台中市西屯區西安街200號");
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
	 
	while(1){	
	
	    printf("輸入欲使用的功\能:\nA=發表評論\nB=查詢店家資料\nC=隨機搜尋店家\nD=線上付費\nE=離開程式\n\n輸入選單:"); 
	    scanf(" %c",&temp);
	 switch(temp)
	  {
	    	case 'A': case 'a':
	    		system("CLS");
	    		printf("店家列表:\n1.森記便當店\n2.胡媽媽割包\n3.麥當勞\n\n\n請輸入你要顯示的店家資訊代碼:");
	    		scanf("%d",&choose);
	    		printf("輸入評論:");
	    		scanf("%s",&comment);
	    		system("CLS");
	    		printf("評論成功\\n\n\n\n");
	    		if(choose==1)
	    	        addcomment(sengi,comment);

	             else if(choose==2)	
	    	        addcomment(mama,comment);
		         else if(choose==3)
			        addcomment(mc,comment);
		         else
		         {
		         	system("CLS");
		         	printf("輸入店家代碼錯誤\n\n");
				 }
	    		break;
	        case 'B': case 'b':
	        	 system("CLS");
	    		 printf("店家列表:\n1.森記便當店\n2.胡媽媽割包\n3.麥當勞\n\n\n請輸入你要顯示的店家資訊代碼:");
	             scanf("%d",&choose);
	             if(choose==1)	
	    	        output(sengi);
	             else if(choose==2)	
	    	        output(mama);
		         else if(choose==3)
			        output(mc);
		         else
		         {
		         	system("CLS");
		         	printf("輸入店家代碼錯誤\n\n");
				 }      
	    		break;
	    	case 'C': case 'c':
	    		
	    		break;
			case 'D': case 'd':
	    		
	    		break;		
	    	case 'E': case 'e':
	    		return 0;
	    		break;	
	   }
	    

	} 	
	return 0;	
}
