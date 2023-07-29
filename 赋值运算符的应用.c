#include<stdio.h>
int main()
{
	int a=1,b=2,c=3,d=4;
	a+=b;
	b-=c;
	c*=d;
	d/=a;
	a%=c;
	printf("%d,%d,%d,%d,%d",a,b,c,d,a);
	return 0;
 } 
