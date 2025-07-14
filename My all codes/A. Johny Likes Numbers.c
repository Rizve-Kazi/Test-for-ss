#include<stdio.h>
int main()
{
    long long int number,k;
    int rem,multiple;
    scanf("%lld %lld",&number,&k);

    rem =(number+1)/k;
    multiple = rem*k;

    if(multiple==(number+1))
    {
        printf("%d\n",multiple);
    }
    else
    {
        printf("%d\n",(rem+1)*k);
    }
    return 0;
}
