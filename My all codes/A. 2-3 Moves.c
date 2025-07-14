#include<stdio.h>
int main()
{
    int range,rem;
    long long int n;
    scanf("%d",&range);

    for(int i=0; i<range; i++)
    {
        scanf("%lld",&n);

        if(n==1)
        {
            printf("2\n");
        }

        else if(n==2)
        {
            printf("1\n");
        }

        else if(n%3==0)
        {
            rem = n/3;
            printf("%d\n",rem);
        }

        else if(n%3==1)
        {
            rem = n/3;
            printf("%d\n",rem+1);
        }

        else if(n%3==2)
        {
            rem = n/3;
            printf("%d\n",rem+1);
        }
    }
    return 0;
}
