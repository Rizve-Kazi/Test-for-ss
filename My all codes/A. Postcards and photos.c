#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    scanf("%s",&str);
    int len=strlen(str);
    int count=0;

    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[i+1])
        {
            count++;
        }
    }
    printf("Count = %d\n",count);
}
