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
	
	printf("���W:%s\n\n",shop->name);
	printf("�a�}:%s\n\n",shop->address);	
	printf("���:%s\n",shop->menu);	
	printf("���a�q��:%s\n\n",shop->phone);
	
	while(shop->next!=NULL){
		
		printf("�Ȥ����%d:%s\n",count,shop->comment);
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
	strcpy(sengi->address,"407�x������ٰϦ�w��200��");
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
	 
	while(1){	
	
	    printf("��J���ϥΪ��\\��:\nA=�o�����\nB=�d�ߩ��a���\nC=�H���j�M���a\nD=�u�W�I�O\nE=���}�{��\n\n��J���:"); 
	    scanf(" %c",&temp);
	 switch(temp)
	  {
	    	case 'A': case 'a':
	    		system("CLS");
	    		printf("���a�C��:\n1.�˰O�K��\n2.�J�����Υ]\n3.�����\n\n\n�п�J�A�n��ܪ����a��T�N�X:");
	    		scanf("%d",&choose);
	    		printf("��J����:");
	    		scanf("%s",&comment);
	    		system("CLS");
	    		printf("���צ��\\\n\n\n\n");
	    		if(choose==1)
	    	        addcomment(sengi,comment);

	             else if(choose==2)	
	    	        addcomment(mama,comment);
		         else if(choose==3)
			        addcomment(mc,comment);
		         else
		         {
		         	system("CLS");
		         	printf("��J���a�N�X���~\n\n");
				 }
	    		break;
	        case 'B': case 'b':
	        	 system("CLS");
	    		 printf("���a�C��:\n1.�˰O�K��\n2.�J�����Υ]\n3.�����\n\n\n�п�J�A�n��ܪ����a��T�N�X:");
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
		         	printf("��J���a�N�X���~\n\n");
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
