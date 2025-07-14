#include<stdio.h>
int main()
{
    int number_one,number_two,i,sum_one=0,sum_two=0,sum=0;
    scanf("%d",&number_one);
    scanf("%d",&number_two);

    for(i=1; i<number_one; i++)
    {
        if(i%13!=0)
        {
            sum_one=sum_one + i;

        }
    }

    for(i=1; i<=number_two; i++)
    {
        if(i%13!=0)
        {
            sum_two = sum_two + i ;
        }
    }

    sum = sum + sum_two-sum_one;
    printf("%d\n",sum);

    return 0;

}
