#include<stdio.h>
int main()
{
	int a,b,c;
	b=5;
	c=5;
	a=++b+c--;
	printf("%d,%d,%d\n",a,b,c);
	a=b---c;
	printf("%d,%d,%d\n",a,b,c);
	a=-b+++c;
	printf("%d,%d,%d\n",a,b,c);
	return 0;
}
