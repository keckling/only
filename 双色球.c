#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main()
{
		srand((unsigned int)time(NULL));	//ʹ��ϵͳ��ʱ����ֵ��Ϊ���������
		int i = 0;
		int j = 0;
		int temp;						//����һ����ʱ������������ʱ���������
		int red[6];						//����red���飬����������ɵĺ�ɫ�����
		int blue;						//����blue���ͱ���������������ɵ���ɫ�����
		for (i = 0; i < 6;)				//�������6����ɫ�����
		{
			temp = rand() % 33 + 1;
			for (j = 0; j < i; j++)
			{
				//�����ж������е������ɺ�ɫ������Ƿ��������ɵĺ�����ͬ
				if (red[j] == temp)		//�����ͬ�������������µĺ�ɫ�����
				{
					break;				//�����ڲ�forѭ��
				}
			}
			if (j == i)
			{
				red[i] = temp;			//�������ɵĺ�ɫ����뱣����red������
				i++;					//���Ӻ�ɫ�������
			}
		}

		blue = rand() % 16 + 1;			//���������ɫ�����
		printf("Red : ");
		for (i = 0; i < 6; i++)
		{
			printf("%d ", red[i]);		//������������еĺ�ɫ�����
		}
		printf("\n");
		printf("Blue : %d\n", blue);	//�����ɫ�����
		return 0;
}

