#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str[100];
    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {
        scanf("%s",&str);
        int count1=0,count2=0;

        for(int k=0; str[k]!='\0'; k++)
        {
            if(str[k]=='A')
            {
                count1++;
            }
            else if(str[k]=='B')
            {
                count2++;
            }
        }
        if(count1>count2)
        {
            printf("A\n");
        }
        else if(count1<=count2)
        {
            printf("B\n");
        }
    }
    return 0;
}
