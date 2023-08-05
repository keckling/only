#include<stdio.h>
int main()
{
	int a,b,c;
	a=0;
	b=0;
	c=0;
	scanf("%d%d",&a,&b);
	while(c=a%b)
	{
		a=b;
		b=c;
	}
	printf("%d\n",b);    
	return 0;
}
