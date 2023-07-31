#include<stdio.h>
int num(int n)
{
if(n==1||n==2)
return 1;
return num(n-1)+num(n-2);
}
int main()
{
	printf("f(1)=%d\n",num(1));
	printf("f(2)=%d\n",num(2));
	printf("f(3)=%d\n",num(3));
	printf("F(4)=%d\n",num(4));
	printf("f(5)=%d\n",num(5));
	printf("f(12)=%d\n",num(12));
	return 0;
}
