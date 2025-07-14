#include<stdio.h>
int main()
{
    long long int n;
    long long int m;
    int result,rem,ans;

    scanf("%lld %lld",&n,&m);

    result = pow(2,n);

    rem = m/result;
    ans = m-(result*rem);

    printf("%d\n",ans);

    return 0;
}
