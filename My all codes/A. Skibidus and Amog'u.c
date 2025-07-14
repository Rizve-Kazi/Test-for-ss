#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str[11];
    scanf("%d",&test);

    while(test--)
    {
        scanf("%s",&str);
        int len=strlen(str);

        if(len>0)
        {
            str[len-2]='i';
            str[len-1]='\0';
            printf("%s\n",str);
        }

    }
    return 0;
}
