#include<stdio.h>
int main()
{
    int range,number,k,temp,div,rest;
    scanf("%d",&range);
    scanf("%d",&number);

    temp = number;

    if(number%10==0)
    {
        for(int i=1; i<=range; i++)
        {
            div = temp%10;
            temp = temp/10;
        }

        printf("Result = %d\n",temp);
    }

    else if(number%10!=0)
    {
        for(int j=1; j<=range-1; j++)
        {
            rest = temp-1;
            temp = temp-1;

            if(temp%10==0)
            {
                div = temp%10;
                temp = temp/10;
            }
        }
    }
    printf("Result = %d\n",temp);
}
