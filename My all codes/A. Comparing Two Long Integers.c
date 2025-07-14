#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);

    if(a>b)
    {
        printf(">\n");
    }

    else if(a<b)
    {
        printf("<\n");
    }

    else if(a==b)
    {
        printf("=\n");
    }
    return 0;
}
