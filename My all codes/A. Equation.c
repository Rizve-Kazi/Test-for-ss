#include<stdio.h>
int main()
{
    long long int number;
    int m,n,ans;
    scanf("%lld",&number);

    m = (number*2);
    n = (number*3);

    if(number==1)
    {
        printf("9 8\n");
    }

    else if((m%2==0 || m%3==0 || m%5==0 || m%7==0) && (number%2==0 || number%3==0 || number%5==0 || number%7==0))
    {
        printf("%d %lld",m,number);
    }

    else if((m%2==0 || m%3==0 || m%5==0 || m%7==0) && (n%2==0 || n%3==0 || n%5==0 || n%7==0))
    {
        printf("%d %d",n,m);
    }
    return 0;
}
