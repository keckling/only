#include<stdio.h>
int main()
{
	int a, b, c;
	for (b = 1; b <= 9; b++)
	{
		for (a = 1; a <= b; a++)
		{
			c = a * b;
			printf("%d*%d=%-2d ", a, b, c);//%2d �Ҷ���   %-2d ����� 
		}
		printf("\n");
	}
	return 0;
}
