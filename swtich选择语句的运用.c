#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)                    //swtich�����ʽ��   ���ʽֻ�ܶ������� ��int�� 
	{
		case 1:                   //case ���ʽ         ���ʽֻ�ܶ������ͳ��� (1,2,3,4,5,6)
			printf("����1\n");
			break;
		case 2:
			printf("����2\n");
			break;
		case 3:
			printf("����3\n");
			break;
		case 4:
			printf("����4\n");
			break;
		case 5:
			printf("����5\n");
            break;
		case 6:
			printf("����6\n");
			break;
		case 7:
			printf("������\n");
			break;
		default:
		    printf("�������\n");
			break; 
	}
	return 0;
}


//{
//	int day=0;
//	scanf("%d",&day);
//	switch(day)                     
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//		default:
//		    printf("�������\n");
//			break;       	
//	}
//	return 0;
//}
