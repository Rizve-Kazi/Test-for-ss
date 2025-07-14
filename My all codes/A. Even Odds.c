#include<stdio.h>
int main()
{
    long long int number,k,devide;
    scanf("%lld %lld",&number,&k);

    devide=number%2;

    if(devide==0)
    {
        if((number/2)>=k)
        {
            long long int value=(k*2)-1;
            printf("%lld\n",value);
        }
        else if(k>(number/2))
        {
            long long int value=(k-(number/2));
            printf("%lld\n",value*2);

        }
    }
    else if(devide!=0)
    {
        long long int m=(number/2)+1;

        if(m>=k)
        {
            long long int value=(k*2)-1;
            printf("%lld\n",value);
        }
        else if(k>m)
        {
            long long int value=(k-(number/2)-1);
            printf("%lld\n",value*2);

        }
    }
}
