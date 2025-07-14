#include<stdio.h>
#include<string.h>
int main()
{
    int len,count=0;
    char str[51];
    scanf("%d",&len);
    scanf("%s",&str);

    for(int i=0; i<len-1; i++)
    {
        if(str[i]==str[i+1])
        {
            count++;
        }
    }
    printf("%d\n",count);
}
