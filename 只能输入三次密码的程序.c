#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = "0";
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("����������\n");
        scanf("%s", &arr);
        if (strcmp(arr, "123456") == 0)                     //strcmp---�����Ƚ������ַ����Ƿ����(ͷ�ļ�Ϊ#include<string.h>)
        {
            printf("������ȷ\n");
            break;
        }
        else
        {
            printf("�������\n");
        }
    }
    if (i == 3)
    {
        printf("�����������������˳�����\n");
    }
    return 0;
}
