#include<stdio.h>
int water=1;
void Ffire(int fire)
{
	int water=0;
	fire-=water;
}
void a(int fire)
{
	if(fire==0)
	printf("��������!\n");
	else
	printf("��������û�б�����!\n");
}
int main()
{
	int fire=1;     
	Ffire(fire);   
	printf("Զˮ�Ƚ���");
	a(fire);
	{
		int water=1;int fire=1;
		fire-=water;
		printf("��ˮ�Ƚ���");
		a(fire);
	}
	a(fire);
	fire-=water;
	a(fire);
	return 0;
}
