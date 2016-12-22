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
	
	printf("���W:%s\n\n",shop->name);
	
	printf("�a�}:%s\n\n",shop->address);
	
	printf("���:%s\n",shop->menu);
	
	printf("���a�q��:%s\n\n",shop->phone);
	
	while(shop->next!=NULL){
		
		printf("����%d:%s\n",count,shop->comment);
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
	
	strcpy(sengi->address,"49087�x������ٰϦ�w��200��");
	
	strcpy(sengi->menu,"�ư��� 75$\n���ƶ� 75$\n���L�� 75$\n�o���L�� 75$\n�M�涺 50$\n");
	
	strcpy(sengi->name,"�˰O�K��");
	
	strcpy(sengi->phone,"04-9487948");
	
	RESTAURANT *mama=getnode();
	
	strcpy(mama->address,"407�x������ٰϦ�w��201��");
	
	strcpy(mama->menu,"���z�Υ] 35$\n�G�׳Υ] 35$\n����׳Υ] 35$\n���ڳΥ] 35$\n�ޱƳΥ] 35$\n");
	
	strcpy(mama->name,"�J�����Υ]");
	
	strcpy(mama->phone,"04-0920000");
	
	RESTAURANT *mc=getnode();
	
	strcpy(mc->address,"407�x������ٰϦ�w��202��");
	
	strcpy(mc->menu,"������ 39$\n�d���� 39$\n������ 39$\n�l�����L��39$\n�O�N���L�� 39$\n");
	
	strcpy(mc->name,"�����");
	
	strcpy(mc->phone,"04-4066688");
	 
	while(choose!=-1){
		
		printf("1.�˰O�K��\n2.�J�����Υ]\n3.�����\n\n(���X�п�J-1)\n�п�J�A�n�����a��T�N�X:");
	
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
			printf("��J�N�X���~��\n");
			
		}
	    
	} 
	
	
	
	
	
}

