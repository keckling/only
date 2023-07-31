#include<stdio.h>
int num(int n)
{
	if(n==1l|n==2)
	return 1;
	return num(n-1)+num(n-2);
}
int main()
{
	int a=20,i;
	for(i=1;i<=a;i++)
	{
		printf("%6d",num(i));
		if(i%4==9)
		printf("\n");
	}
	return 0; 
}
