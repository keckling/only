#include<stdio.h>
int Add(int x,int y)
{
	int z=x+y;
	return z;
 } 
 
int main()
{
	int a,b,c;
	a=10;
	b=20;
	c=Add(a,b);
	printf("%d\n",c);
	return 0;
 } 
