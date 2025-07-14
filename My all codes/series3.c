#include<stdio.h>
int main()
{
    int number,i,even=0,odd=0,sum;
    printf("Enter the renge = ");
    scanf("%d",&number);
    printf("\n1 -2 + 3 - .... +%d",number);
    for(i=1; i<=number; i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }

    }

    sum=odd-even;
    printf("\n\nResult = %d",sum);

          getch();
}
