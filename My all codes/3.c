#include<stdio.h>
int main()
{
    int range,divisor,result;
   long long int number;
    scanf("%lld",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d",&number);

        if(number%3==0 || number%5==0 || number%7==0 || number%11==0 ||  number%13==0 || number%17==0 || number%23==0 || number%29==0 || number%31==0 || number%37==0 || number%41==0 || number%43==0 || number%47==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
