#include<stdio.h>
int main()
{
    int range,sum1,sum2,sum3,sum4,sum5;
    long long int n;
    scanf("%d",&range);

    sum1 = n+2;
    sum2 = n+3;
    sum3 = n+5;
    sum4 = n+7;
    sum5 = n+11;

    for(int i=1;i<=range;i++)
    {
        scanf("%lld",&n);

        if(((sum1%2==0) || (sum1%3==0) || (sum1%5==0) || (sum1%7==0)) && (sum1!=2 || sum1!=3 || sum1!=5 || sum1!=7))
        {
            printf("2\n");
        }

         else if(((sum2%2==0) || (sum2%3==0) || (sum2%5==0) || (sum2%7==0)) && (sum2!=2 || sum2!=3 || sum2!=5 || sum2!=7))
        {
            printf("3\n");
        }

         else if(((sum3%2==0) || (sum3%3==0) || (sum3%5==0) || (sum3%7==0)) && (sum3!=2 || sum3!=3 || sum3!=5 || sum3!=7))
        {
            printf("5\n");
        }

         else if(((sum4%2==0) || (sum4%3==0) || (sum4%5==0) || (sum4%7==0)) && (sum4!=2 || sum4!=3 || sum4!=5 || sum4!=7))
        {
            printf("7\n");
        }

         else if(((sum5%2==0) || (sum5%3==0) || (sum5%5==0) || (sum5%7==0)) && (sum5!=2 || sum5!=3 || sum5!=5 || sum5!=7))
        {
            printf("11\n");
        }
    }
}
