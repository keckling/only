#include<stdio.h>
#include<string.h>

int main()
{
    char arr[] = "0";
    int i = 0;
    for (i = 0; i < 3; i++)
    {
        printf("请输入密码\n");
        scanf("%s", &arr);
        if (strcmp(arr, "123456") == 0)                     //strcmp---用来比较两个字符串是否相等(头文件为#include<string.h>)
        {
            printf("密码正确\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if (i == 3)
    {
        printf("三次密码均输入错误，退出程序\n");
    }
    return 0;
}
