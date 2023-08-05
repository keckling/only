#include<stdio.h> 
int main()
{
	int a,b,d;
	d=1;
	double c;
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
	{
		c+=d*1.0/a;
		d=-d;
	}
	printf("%lf\n",c);
    return 0;	
} 
