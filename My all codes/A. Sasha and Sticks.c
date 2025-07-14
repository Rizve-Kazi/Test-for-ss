#include<stdio.h>
int main()
{
    long long int n,k;
    int rem;
    scanf("%lld %lld",&n,&k);

    rem = n/k;

    if(rem%2==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
