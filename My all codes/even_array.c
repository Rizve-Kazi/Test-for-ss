#include<stdio.h>
int main()
{
    int A[20],i,range,even = 0 ,odd = 0,sum_Off_Odd = 0,sum_Off_Even = 0;
    printf("Enter the range = ");
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=1;i<=range;i++)
    {
        printf("A[%d] = %d\n",i,A[i]);

    }

    printf("\n");

    for(i=1;i<=range;i++)
    {
        if(A[i]%2==0)
        {
           even++;
           sum_Off_Even = sum_Off_Even + A[i];
        }

        else
        {
            odd++;
            sum_Off_Odd = sum_Off_Odd + A[i];
        }
    }

    printf("Total even = %d\n",even);
    printf("Total odd = %d\n",odd);
    printf("Sum of even numbers = %d\n",sum_Off_Even);
    printf("Sum of odd numbers = %d\n",sum_Off_Odd);

}
