#include<stdio.h>
int main()
{
	int day=0;
	scanf("%d",&day);
	switch(day)                    //swtich（表达式）   表达式只能定义整形 （int） 
	{
		case 1:                   //case 表达式         表达式只能定义整型常量 (1,2,3,4,5,6)
			printf("星期1\n");
			break;
		case 2:
			printf("星期2\n");
			break;
		case 3:
			printf("星期3\n");
			break;
		case 4:
			printf("星期4\n");
			break;
		case 5:
			printf("星期5\n");
            break;
		case 6:
			printf("星期6\n");
			break;
		case 7:
			printf("星期天\n");
			break;
		default:
		    printf("输入错误\n");
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
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//		    printf("输入错误\n");
//			break;       	
//	}
//	return 0;
//}
