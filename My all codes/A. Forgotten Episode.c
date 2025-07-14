#include<stdio.h>
int main()
{
    long long int range,ans;
    int i,number;

    scanf("%lld",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d",&number);

        if(number!=i)
        {
            ans=i;
        }
    }
    printf("%d\n");
}
