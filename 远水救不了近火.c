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
	printf("火被扑灭了!\n");
	else
	printf("警报，火没有被扑灭!\n");
}
int main()
{
	int fire=1;     
	Ffire(fire);   
	printf("远水救近火？");
	a(fire);
	{
		int water=1;int fire=1;
		fire-=water;
		printf("近水救近火？");
		a(fire);
	}
	a(fire);
	fire-=water;
	a(fire);
	return 0;
}
