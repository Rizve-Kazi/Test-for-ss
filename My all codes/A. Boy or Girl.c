#include<stdio.h>
int main()
{
    char s[100];
    scanf("%s",s);

    int len = strlen(s);

    if(len%2==0)

        printf("CHAT WITH HER!\n");


    else

        printf("IGNORE HIM!\n");

    return 0;
}
