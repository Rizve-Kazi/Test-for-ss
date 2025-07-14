#include<stdio.h>
int main()
{
    int range,number,rem,temp;
    scanf("%d",&number);
    temp = number;
    for(int i=1;i<=100; i++)
    {
        rem = temp%10;
        temp = temp/10;


        if(temp==0)
        {

            break;
             printf("Remainder = %d\n",temp%10);
        }

    }

    printf("Result = %d\n",temp);
}
