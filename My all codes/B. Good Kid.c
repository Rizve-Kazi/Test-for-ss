#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
            char str[9][9];

        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                scanf("%c",&str[i][j]);
            }

        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(str[i][j]>='a' && str[i][j]<='z')
                {
                    printf("%c",str[i][j]);
                }
            }
        }
        printf("\n");
    }

}
