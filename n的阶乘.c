#include<stdio.h>
int main()
{
	int a,b,c;
	a=0;
	b=0;
	c=1;
	scanf("%d",&b); 
	for(a=1;a<=b;a++)
	{
		c=c*a;
	}
	printf("%d\n",c);
	return 0;
}
