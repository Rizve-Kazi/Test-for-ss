#include<stdio.h>
int main()
{
    int a,b,c,d,sum,sum1,sum2,sum3,sum4,sum5,sum6;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    sum =a+b+c+d;
    sum1 = a+b;
    sum2 = a+c;
    sum3 = a+d;
    sum4 = b+c;
    sum5 = b+d;
    sum6 = c+d;

    if(sum%2==0)
    {
        if(sum1==sum/2 || sum2==sum/2 || sum3==sum/2 || sum4==sum/2 || sum5==sum/2 || sum6==sum/2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    else
    {
        printf("NO\n");
    }
    return 0;
}
