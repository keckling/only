#include<stdio.h>
int main()
{
	int a,b,c,d;
	d=0;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
		for(c=2;c<a;c++)
		{
			if(a%c==0)
			{
				break;
			}
		}
		if(a==c)
		{
			d++;
			printf("%d ",a);
		}
	}
	printf("\n�ܹ���=%d\n",d);
	return 0;
}
