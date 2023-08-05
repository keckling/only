#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
		if(a%10==9)
		{
			c++;
			printf("%d ",a);
		}
		if(a/10==9)
		{
			c++;
			printf("%d ",a); 
		}
	} 
	printf("\n×ÜÊý=%d\n",c);
	return 0;
}
