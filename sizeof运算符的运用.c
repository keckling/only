#include<stdio.h>
int main()
{
	int a=10;
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof a);
	return 0;
}
//sizeof 计算变量、类型所占空间大小，单位字节 
