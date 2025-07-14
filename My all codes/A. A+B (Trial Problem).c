#include<stdio.h>
int main()
{
    long long int range;
    int a,b;

    scanf("%lld",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d",&a,&b);
        int sum=0;

        sum = (a+b);

        printf("%d\n",sum);
    }
    return 0;
}
