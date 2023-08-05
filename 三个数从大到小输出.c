#include<stdio.h>
int mani()
{
	int a,b,c,d;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		int d=a;
		a=b;
		b=d;
	}
	if(a<c)
	{
		int d=a;
		c=a;
		c=d;
	}
	if(b<c)
	{
		int d=b;
		b=c;
		c=d;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
