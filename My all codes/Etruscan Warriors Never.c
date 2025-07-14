#include<stdio.h>
#include<math.h>
int main()
{
    long long s,n,b;
    int test;
    scanf("%d",&test);

    for(int i=0; i<test; i++)
    {
        scanf("%lld",&s);
         b=sqrt(1+8*s);
        n=(-1+b)/2;
        printf("%lld\n",n);
    }

    return 0;
}
