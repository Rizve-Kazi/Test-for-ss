#include<stdio.h>
int main()
{
    int range;
    long long int l;
    long long int r;
    int i;

    scanf("%d",&range);


    for(i=1;i<=range;i++)
    {
        scanf("%lld %lld",&l,&r);
        int sum_one=0,sum_two=0,sum=0;

        for(int j=l;j<=r;j++)
        {
            if(j%2==0)
            {
                sum_one=sum_one+j;
            }

            else if(j%2!=0)
            {
                sum_two=sum_two+j;
            }
        }
        sum = sum_one-sum_two;
        printf("%d\n",sum);
    }
    return 0;
}
