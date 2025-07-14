#include<stdio.h>
int main()
{
    int range;
    long long int n;
    long long int k;

    scanf("%d",&range);

    for(int i=1; i<=range; i++)
    {
        scanf("%lld %lld",&n,&k);

        if((n%2==0 && k%2==0) || k==1)
        {
            printf("YES\n");
        }

        else if(n%2!=0 && k%2!=0)
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
