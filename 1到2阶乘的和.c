#include<stdio.h>
int main()
{
	int b,c,d; 
	b=0;
	c=1;
	for(b=1;b<=2;b++)
	{
		c=c*b;
	    d=d+c;
	}
	printf("%d\n",d);
	return 0;
}
