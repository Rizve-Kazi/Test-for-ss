#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    char s2[100];

    scanf("%s %s",&s1,&s2);

    strlwr(s1);
    strlwr(s2);

    int d=strcmp(s1,s2);

    if(d>0)
    {
        printf("1\n");
    }

    else if(d<0)
    {
        printf("-1");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
