#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
		srand((unsigned int)time(NULL));	//使用系统定时器的值作为随机数种子
		int i = 0;
		int j = 0;
		int temp;						//定义一个临时变量，总来暂时保存随机数
		int red[6];						//定义red数组，保存随机生成的红色球号码
		int blue;						//定义blue整型变量，保存随机生成的蓝色球号码
		for (i = 0; i < 6;)				//随机生成6个红色球号码
		{
			temp = rand() % 33 + 1;
			for (j = 0; j < i; j++)
			{
				//依次判断数组中的已生成红色球号码是否与新生成的号码相同
				if (red[j] == temp)		//如果相同，则重新生成新的红色球号码
				{
					break;				//跳出内层for循环
				}
			}
			if (j == i)
			{
				red[i] = temp;			//将新生成的红色球号码保存在red数组中
				i++;					//增加红色球的数量
			}
		}

		blue = rand() % 16 + 1;			//随机产生蓝色球号码
		printf("Red : ");
		for (i = 0; i < 6; i++)
		{
			printf("%d ", red[i]);		//依次输出数组中的红色球号码
		}
		printf("\n");
		printf("Blue : %d\n", blue);	//输出蓝色球号码
		return 0;
}

