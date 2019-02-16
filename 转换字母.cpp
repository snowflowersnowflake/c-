#include<stdio.h>
int main()
{
    char ch;
    printf("请输入一个小写字母\n,输入#退出。\n");
    scanf("%c",&ch);
    while(ch!='#')
    {
        ch-=32;
        printf("得到的大写字母是%c\n"，ch);

    }
    return 0;
}