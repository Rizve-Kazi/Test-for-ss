#include<stdio.h>
int main()
{
    long long i,range,sum_one=0,sum_two=0,sum;
    scanf("%lf",&range);
    for(i=1; i<=range; i=i+2)
    {
        sum_two = sum_two + i;
    }

    for(i=2; i<=range; i=i+2)
    {
        sum_one = sum_one + i;
    }

    sum = sum_one + (-sum_two);

    printf("%.0lf\n",sum);

    return 0;

}
