#include<stdio.h>
int main()
{
    int number,range,sum=0;

    scanf("%d",&number);
    scanf("%d",&range);

    while(range<=0)
    {
        scanf("%d",&range);

    }

    if(number>0)
    {
        for(int i=number; i<=range+number-1; i++)
        {
            sum = sum + i;
        }

    }

    else
    {
        for(int i=range+number-1; i>=number; i--)
        {
            sum = sum + i;
        }

    }

    printf("%d\n",sum);

        return 0;
}
