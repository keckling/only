#include<stdio.h>
void swap(int *p1,int *p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
int main()
{
	int *a,*b,*c,x,y,z;
	a=&x;
	b=&y;
	c=&z;
	printf("输入三个整数：");
	scanf("%d %d %d",a,b,c);
	printf("%d,%d,%d\n",*a,*b,*c);
	if(*a<*b)
	swap(a,b);
	if(*a<*c) 
	swap(a,c);
	if(*b<*c)
	swap(b,c);
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	 return 0;
}
