#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
	    if((a%4==0&&a%100!=0)||(a%400==0))
		{
			printf("%d ",a);
			c++;
        }
	}
	printf("\n×ÜÄê·Ý=%d\n",c);
	return 0;
}
