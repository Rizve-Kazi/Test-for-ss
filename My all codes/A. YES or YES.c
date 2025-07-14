
#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str[4];
    scanf("%d",&test);

    for(int i=0;i<test;i++)
    {
        scanf("%s",str);

        strlwr(str);

        if(strcmp(str,"yes")==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
