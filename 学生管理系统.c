#include <stdio.h>
#include<string.h>
#include <stdlib.h> 
#define LEN sizeof(struct student)
//ѧ����Ϣ�ṹ�� 
struct student
{int num;
 char name[20];
 char clas[20];
 char sex[5];
 float Eng_score;
 float C_score;
 float total;
 float aver;
};
struct student stu[50];
//ϵͳ���� 
int main()
{
	 void menu(); 
	 void in();
	 void delet();
	 void updet();
	 void select();
	 void print();
	 void sort();
	 void max();
	 void cut();
	 void clea(); 
	menu();
	int n;
	printf("��ѡ����(1-9)��\n");	
	scanf("%d",&n);
	while(n)
	{ 
		if(n>=1&&n<=9)
		{ 
			switch(n)
			{
				 case 1:in();break;
				 case 2:delet();break; 
				 case 3:updet();break; 
				 case 4:select();break; 
				 case 5:print();break;
				 case 6:sort();break;
				 case 7:max();break;
				 case 8:cut();break;
				 case 9:clea();break;     
			}
			if(n==9)
			{
				menu();
			} 
		    printf("\n");
		    printf("��ѡ����(1-9)��"); 
		    scanf("%d",&n);
	    }
		
		else 
		 {
		 	printf("\n"); 
		 	printf("����������:");
		    scanf("%d",&n);
		 }
		
	}
	
		return 0;
}
//Ŀ¼ 
void menu()
{
	 printf("\n\n\n");
	 printf("\t\t-------------------------------------------------\n");
	 printf("\t\t||              ----------------               ||\n"); 
	 printf("\t\t||**************ѧ����Ϣ����ϵͳ***************||\n");
	 printf("\t\t||              ----------------               ||\n");
	 printf("\t\t||                                             ||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~1.¼��ѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~2.ɾ��ѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~3.�޸�ѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~4.��ѯѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~5.��ʾѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~6.����ѧ����Ϣ~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~7.��ʾ��óɼ�~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~8.����ͳ�Ƴɼ�~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||~~~~~~~~~~~~~~~9.����~~~~~~~~~~~~~~~~~~~~~~~~||\n");
	 printf("\t\t||                                             ||\n");
	 printf("\t\t||*********************************************||\n");
} 
//¼��ѧ����Ϣ 
void in()
{
	void print();
	FILE *fp;
	int i, m=0;
	char ch[2];
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
	   	printf("�ļ���ʧ��\n");
	  	return;
    }
	while(!feof(fp))
	{
	  	if(fread(&stu[m],LEN,1,fp)==1)
	 	{
		 	m++;
		}
	}
	fclose(fp);
	if(m==0)
	{
	 	printf("�ļ�û������\n");
	}
	else 
	{
	  	print();
	}				
 	if((fp=fopen("stu.txt","ab+"))==NULL)
  	{
   		printf("�ļ���ʧ��\n");
   		return; 
  	}
	printf("����ѧ����Ϣ(y/n);\n");
 	scanf("%s",ch);
 	while(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
 	{  
    	printf("number:\n");
 		scanf("%3d",&stu[m].num);
 		for(i=0;i<m;i++)
 		{
			if(stu[i].num==stu[m].num)
			{
				printf("������Ϣ�Ѵ���\n");
				fclose(fp); 
				getchar();
				return;
			}
		}
		printf("name:\n");
		scanf("%s",stu[m].name);
		printf("class:\n");
		scanf("%s",stu[m].clas);
		printf("sex:\n");
		scanf("%s",stu[i].sex);
		printf("Eng_score:\n");
		scanf("%f",&stu[m].Eng_score);
		printf("C_score:\n");
		scanf("%f",&stu[m].C_score);
		stu[i].total=stu[i].C_score+stu[i].Eng_score;
		stu[i].aver=(stu[i].C_score+stu[i].Eng_score)/2; 
	  	if(fwrite(&stu[m],LEN,1,fp)!=1)
	  	{
	  		printf("���ܱ���\n");
	    	getchar(); 
	  	}	 
	  	else
	  	{
	   		printf("��Ϣ����ɹ�\n");
	   		
	   		m++;
	  	}
		printf("�Ƿ����¼��ѧ����Ϣ(y/n)��");
		scanf("%s",ch); 
	}
	fclose(fp);
} 
 
//ɾ��ѧ����Ϣ 
void delet()
{   
    void print();
	FILE *fp;
	int num,m=0;
	int i,j;
	int flag=0; 
	char ch[2];
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
			m++;
		}
	} 
	fclose(fp);
	if(m==0)
	{
		printf("�ļ���û��ѧ����Ϣ\n");
	}
	else
	{
		print();
	    printf("��������Ҫɾ��ѧ����Ϣ��ѧ�ţ�");
	    scanf("%d",&num); 
	}
	for(i=0;i<m;i++)    
	{
		if(stu[i].num==num)
		{
			printf("��ѧ�����ҵ����Ƿ�ɾ��(y/n):");
			scanf("%s",ch);
			if(strcmp(ch,"y")==0||strcmp(ch,"Y")==0)
			{
				for(j=i;j<m;j++)
				{
					stu[j]=stu[j+1];
				}
				 m--;
				 flag=1;
				if((fp=fopen("stu.txt","wb"))==NULL)
				{
					printf("�ļ���ʧ��\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("���ܱ���\n");
						getchar();
					}
				}
				fclose(fp);
				printf("ɾ���ɹ���\n");break;
				
			}
			else
			{
			   printf("ѧ����Ϣ���ڣ�����Ҫɾ����");
			   break; 
		    }
		}
	 		
	}
	if(m==i&&flag==0) 
	{
		printf("δ�ҵ���ѧ��");	
	}
	
}
//�޸�ѧ����Ϣ 
void updet()
{
	void print();
	int num;
	char name[10]; 
    char clas[20];
    char sex[5];
    float Eng_score;
    float C_score;	
	FILE *fp;
	int m=0,a;
	int i,j;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
			m++;
		}
	}
	fclose(fp);
	if(m==0)
	{
		printf("�ļ���û��ѧ����Ϣ\n");
	} 
	else
	{
	 	print();
	 	printf("��������Ҫ�޸�ѧ����Ϣ��ѧ�ţ�");
	 	scanf("%d",&num); 
	}
	for(i=0;i<m;i++)
	{
	 	if(num==stu[i].num)
	 	{
	      printf("1:ѧ�ţ�2:������3:�༶��4:�Ա�5:Ӣ��ɼ���6:C���Գɼ�\n");
		  printf("��ѧ���ѱ��ҵ�����ѡ����Ҫ�޸ĵ�����(1-5)��");		  
		  scanf("%d",&a);
		  while(a)
		  { 		 
			  switch (a) 
			  {
			  	
			  	case 1:
			  		printf("��%dѧ����ѧ���޸�Ϊ��",num); 
			  		scanf("%d",&num);
					stu[i].num=num;
					for(j=i+1;j<m;j++)
					{
						if(stu[j].num==num)
						{
							printf("���޸ĵ�ѧ���Ѵ���\n");
							getchar();
							return;
						}
					}   
			  		break;
			  	case 2:
				  	printf("��%dѧ���������޸�Ϊ��",num); 
				  	scanf("%s",name);
				  	strcpy(stu[i].name,name);
				  	break;	
			  	case 3:
			  		printf("��%dѧ���İ༶�޸�Ϊ��",num); 
			  		scanf("%s",clas);
			  		strcpy(stu[i].clas,clas);
			  		break;
			  	case 4:
			  		printf("��%dѧ�����Ա��޸�Ϊ��",num); 
			  		scanf("%s",sex);
					strcpy(stu[i].sex,sex);   
			  		break;
				case 5:
			  		printf("��%dѧ����Ӣ��ɼ��޸�Ϊ��",num); 
			  		scanf("%f",&Eng_score);
			  		stu[i].Eng_score=Eng_score;
			  		stu[i].total=stu[i].C_score+stu[i].Eng_score;
					stu[i].aver=(stu[i].C_score+stu[i].Eng_score)/2;
			  		break;
				case 6:
			  		printf("��%dѧ����C���Գɼ��޸�Ϊ��",num);
					scanf("%f",&C_score);
					stu[i].C_score=C_score;
					stu[i].total=stu[i].C_score+stu[i].Eng_score;
					stu[i].aver=(stu[i].C_score+stu[i].Eng_score)/2;   
			  		break;	  	  	  	
			  	default:
			  	    printf("ѡ�����������ѡ����Ҫ�޸ĵ����ݣ�");
					scanf("%d",&a);   
			  		break;
			    }
			  
			  printf("��ѡ����Ҫ�޸ĵ�����(������޸�����밴0)��");
			  scanf("%d",&a);
		    }
			if((fp=fopen("stu.txt","wb"))==NULL)
				{
					printf("�ļ���ʧ��\n");
					return;
				}
				for(j=0;j<m;j++)
				{
					if(fwrite(&stu[j],LEN,1,fp)!=1)
					{
						printf("���ܱ���\n");
						getchar();
					}
				}
				fclose(fp);
				printf("�޸ĳɹ���\n");
				break;	 	
	    }
    }
    if(m==i)
    {
    	printf("δ�ҵ���ѧ��\n"); 
	}
}
//��ѯѧ����Ϣ 
void select()
{
	int num,m=0;
	int i;
	FILE *fp;
	if((fp=fopen("stu.txt","rb"))==NULL)
	{
		printf("�ļ���ʧ��\n");
		return;
	}
	while(!feof(fp))
	{
		if(fread(&stu[m],LEN,1,fp)==1)
		{
		  m++;
	    }
	 } 
	fclose(fp);
	if(m==0)
	{
		printf("�ļ�û������\n");
		return;
	}	 
	printf("������ѧ��ѧ�Ž��в�ѯ��");
	scanf("%d",&num);
	for(i=0;i<m;i++)
	{
		if(num==stu[i].num)
		{
			printf("\n");
			printf("��ѧ����Ϣ�ѱ��鵽��\n");
			printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n");
			printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex,stu[i].Eng_score,stu[i].C_score,stu[i].total,stu[i].aver); 
			break; 
		}		
	}
	if(m==i)
	{
		printf("��ѧ����Ϣ������\n");
		return;
	}  
}
//��ʾѧ����Ϣ 
void print()
{ 
  int i,m=0;
  FILE *fp;
  if((fp=fopen("stu.txt","rb"))==NULL)
  {
   printf("�ļ���ʧ��\n");
   return; 
  }
    while(!feof(fp))
 {
  if(fread(&stu[m],LEN,1,fp)==1)
 	 {
	 	m++;
	 }
  }
  fclose(fp);
  if(m==0)
  {
  	printf("�ļ���û������\n");
  }
   printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n");  
   for(i=0;i<m;i++)
   {
     printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex,stu[i].Eng_score,stu[i].C_score,stu[i].total,stu[i].aver);
    }
}
//���� 
void sort()
{
	  int i,j,m=0;
	  int ch;
	  FILE *fp;
	  struct student  temp;
	  if((fp=fopen("stu.txt","rb"))==NULL)
	  {
	   printf("�ļ���ʧ��\n");
	   return; 
	  }
	 while(!feof(fp))
	 {
	   if(fread(&stu[m],LEN,1,fp)==1)
	 	 {
		 	m++;
		 }
	  }
	  fclose(fp);
	  if(m==0)
	  {
	  	printf("�ļ���û������\n");
	  }
		printf("1:ѧ������2:Ӣ��ɼ�����3:C��������4:�ܳɼ�����5:ƽ���ɼ�����\n"); 
	   printf("��ѡ����ʾ��ʽ��");
	   scanf("%d",&ch);
	   switch (ch) 
	   {
	   	case 1:
	   		for(i=0;i<m;i++)
	   		{
			   for(j=i+1;j<m;j++)
			   {
			   	if(stu[i].num>stu[j].num)
				   { 
				     temp=stu[i];
				     stu[i]=stu[j];
					 stu[j]=temp;			   	  
				    } 
			   }   	
			}
	   		break;
	   	case 2:
	   		for(i=0;i<m;i++)
			{
			   for(j=i+1;j<m;j++)
			   {
			   		if(stu[i].Eng_score>stu[j].Eng_score)
			   	   { 
			   		    temp=stu[i];
			   		    stu[i]=stu[j];
			   		    stu[j]=temp;			   	  
			   		} 
			   	}   	
			}
	
	   		break;
	   	case 3:
			for(i=0;i<m;i++)
			{
			   	for(j=i+1;j<m;j++)
			   	{
			   		if(stu[i].C_score>stu[j].C_score)
			   		{ 
			   		    temp=stu[i];
			   			stu[i]=stu[j];
			   			stu[j]=temp;			   	  
			   		} 
			   	}   	
			}
			   	
			break;
		case 4:
			for(i=0;i<m;i++)
			{
			   	for(j=i+1;j<m;j++)
			   	{
			   		if(stu[i].total>stu[j].total)
			   		{ 
			   		    temp=stu[i];
			   			stu[i]=stu[j];
			   			stu[j]=temp;			   	  
			   		} 
			   	}   	
			}
			   	
			break;	
        case 5:
			for(i=0;i<m;i++)
			{
			   	for(j=i+1;j<m;j++)
			   	{
			   		if(stu[i].aver>stu[j].aver)
			   		{ 
			   		    temp=stu[i];
			   			stu[i]=stu[j];
			   			stu[j]=temp;			   	  
			   		} 
			   	}   	
			}
			   	
			break;
	   }
   printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n");  
   for(i=0;i<m;i++)
   {
     printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex,stu[i].Eng_score,stu[i].C_score,stu[i].total,stu[i].aver);
    }
	    
}
//���ֵ 
void max()
{
	int i,j=0;
	FILE *fp;
	int m=0;
	if((fp=fopen("stu.txt","rb"))==NULL)
		  {
		   printf("�ļ���ʧ��\n");
		   return; 
		  }
		 while(!feof(fp))
		 {
		   if(fread(&stu[m],LEN,1,fp)==1)
		 	 {
			 	m++;
			 }
		  }
		  fclose(fp);
		  if(m==0)
		  {
		  	printf("�ļ���û������\n");
		  }
	for(i=0;i<m;i++)
	{
		if(stu[i].total>stu[j].total)
		j=i;
	}
	printf("�ܳɼ��ɼ���ߵ�ͬѧ�ǣ�\n");
	printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n");
	printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[j].num,stu[j].name,stu[j].clas,stu[j].sex,stu[j].Eng_score,stu[j].C_score,stu[j].total,stu[j].aver);
  
}
//����ͳ��
void cut()
{
	int i,j;
	float n;
	FILE *fp;
	int m=0;
	if((fp=fopen("stu.txt","rb"))==NULL)
		  {
		   printf("�ļ���ʧ��\n");
		   return; 
		  }
		 while(!feof(fp))
		 {
		   if(fread(&stu[m],LEN,1,fp)==1)
		 	 {
			 	m++;
			 }
		  }
		  fclose(fp);
		  if(m==0)
		  {
		  	printf("�ļ���û������\n");
		  }
	printf("�����밴�ܳɼ������ֵ��");
	scanf("%f",&n);
	printf("�ܳɼ�����%.2f��ͬѧ�У�\n",n);
	printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n"); 
    for(i=0;i<m;i++)
    {
    	if(stu[i].total>=n)
	    printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[i].num,stu[i].name,stu[i].clas,stu[i].sex,stu[i].Eng_score,stu[i].C_score,stu[i].total,stu[i].aver);
	}
	printf("�ܳɼ�С��%.2f��ͬѧ�У�\n",n);
	printf("ѧ��\t����\t�༶\t�Ա�\tӢ��ɼ�\tC���Գɼ�\t�ܳɼ�\tƽ���ɼ�\n");
	for(j=0;j<m;j++)
    {
    	if(stu[j].total<n)
	    printf("%3d\t%s\t%s\t%s\t%.2f\t\t%.2f\t\t%.2f\t %.2f\n",stu[j].num,stu[j].name,stu[j].clas,stu[j].sex,stu[j].Eng_score,stu[j].C_score,stu[j].total,stu[j].aver);
	}
 } 
 //����
 void clea()
 {
 	system("cls");
 } 
