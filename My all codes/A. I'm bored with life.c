#include<stdio.h>
int main()
{
    long long int number_two,number_one,fact=1;
    scanf("%lld %lld",&number_one,&number_two);

    if(number_one>=number_two)
    {
        for(int i=1;i<=number_two;i++)
        {
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }
    else if(number_two>number_one)
    {
        for(int i=1;i<=number_one;i++)
        {
            fact=fact*i;
        }
        printf("%lld\n",fact);
    }
    return 0;
}
