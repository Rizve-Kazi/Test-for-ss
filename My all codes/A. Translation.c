#include<stdio.h>
int main()
{
    char str1[101];
    char str2[101];

    scanf("%s %s",&str1,&str2);

    strrev(str1);

    if(strcmp(str1,str2)==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
