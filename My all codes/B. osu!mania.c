#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
        int len;
        scanf("%d",&len);
        char str[len][5];

        for(int i=0; i<len; i++)
        {
            for(int j=0; j<5; j++)
            {
                scanf("%c",&str[i][j]);
            }
        }
        int found=0;
        for(int i=len-1; i>=0; i--)
        {
            for(int j=0; j<5; j++)
            {
               if(str[i][j]=='#')
               {
                   printf("%d ",j);
                   found=1;
               }
            }
        }
        printf("\n");
    }
}
