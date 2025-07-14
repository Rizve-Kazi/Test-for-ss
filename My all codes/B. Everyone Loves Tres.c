#include<stdio.h>
int main()
{
    int test,range;
    scanf("%d",&test);

    for(int i=0;i<test;i++)
    {
        scanf("%d",&range);

        if(range==2)
        {
            printf("66\n");
        }
        else if(range==1 || range==3)
        {
            printf("-1\n");
        }
        else if(range==4)
        {
            printf("3366\n");
        }
        else if(range==5)
        {
            printf("36366\n");
        }
        else if(range>5 && range%2!=0)
        {
            int sub=range-5;

            for(int i=1;i<=sub;i++)
            {
                if(i!=sub)
                {
                    printf("3");
                }
                else if(i==sub)
                {
                    printf("3");
                }
            }
            printf("36366\n");
        }
        else if(range>5 && range%2==0)
        {
            for(int i=1;i<=range-2;i++)
            {
                if(i!=range-2)
                {
                    printf("3");
                }
                else if(i==range-2)
                {
                    printf("3");
                }
            }
            printf("66\n");
        }
    }
    return 0;
}
