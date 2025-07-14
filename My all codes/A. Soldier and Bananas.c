#include<stdio.h>
int main()
{
    int bananna;
    long long int dolar_has,price;

    long long int sum=0;
    scanf("%d %lld %lld",&bananna,&dolar_has,&price);

    for(int i=1;i<=price;i++)
    {
        sum=sum+bananna*i;
    }
   long long int need;
   need=sum-dolar_has;

   printf("%lld\n",abs(need));
}
