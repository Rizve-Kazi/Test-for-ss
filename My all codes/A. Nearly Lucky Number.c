#include<stdio.h>
int main()
{
    long long number,n;
    int rem,count=0;
    scanf("%lld",&number);
    n=number;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;

        if(rem==4 || rem==7)
        {
            count++;
        }
    }

    if(count==4 || count==7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
