#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str[101];
    scanf("%d",&test);
    int count;

    while(test--)
    {
        scanf("%s",&str);
        int len=strlen(str);
        count=0;

        for(int i=0; i<len; i++)
        {
            if(str[i]==str[i+1])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d\n",len);
        }
        else
        {
            printf("1\n");
        }
    }

}
