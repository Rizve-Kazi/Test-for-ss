#include<stdio.h>
int main()
{
    int i,range,number[50],limit;
    scanf("%d",&range);
    for(int j=1; j<=range; j++)
    {
        scanf("%d",&limit);
        int sum_one=0,sum_two=0,sum;

        for(i=0; i<limit; i++)
        {
            scanf("%d",&number[i]);

            if(i%2==0)
            {
                sum_one = sum_one + number[i];
            }

            else
            {
                sum_two = sum_two + number[i];
            }

            sum = sum_one - sum_two;
        }
        printf("%d\n",sum);
    }
    return 0;
}
