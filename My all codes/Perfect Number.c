#include<stdio.h>
int main()
{
    int range,number,i,j;
    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        scanf("%d",&number);
        int sum = 0;

        for(j=1; j<number; j++)
        {
            if(number%j==0)
            {
                sum = sum + j;
            }
        }
        if(sum==number)
        {
            printf("%d eh perfeito\n",number);
        }

        else
        {
            printf("%d nao eh perfeito\n",number);
        }
    }
    return 0;
}
