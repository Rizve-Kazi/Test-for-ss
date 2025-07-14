#include<stdio.h>
int main()
{
    long long int number,tem1;
    int rem1,tem2,sum1,sum2,sum3,rem2,rem3;
    scanf("%lld",&number);
    tem1=number;

    while(tem1!=0)
    {
        rem1=tem1%10;
        sum1=sum1+rem1;
        tem1=tem1/10;
    }
    if(sum1<=10)
    {
        printf("%d\n",sum1);
    }

    tem2=sum1;

    while(tem2!=0)
    {
        rem2=tem2%10;
        sum2=sum2+rem2;
        tem2=tem2/10;
    }
    printf("%d\n",sum2);
}
