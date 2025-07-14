#include<stdio.h>
int main()
{
    long long int range;
    long long int a;
    long long int b;

    scanf("%lld",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%lld %lld",&a,&b);

        if(a>b)
        {
            if((a-b)%2==0)
            {
                printf("1\n");
            }

            else if((a-b)%2!=0)
            {
                printf("2\n");
            }
        }

        else if(a<b)
        {
            if((b-a)%2==0)
            {
                printf("2\n");
            }

            else if((b-a)%2!=0)
            {
                printf("1\n");
            }
        }
        else if(a==b)
        {
            printf("0\n");
        }
    }
    return 0;
}
