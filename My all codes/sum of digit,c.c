#include<stdio.h>
int main()
{
    int number,temp,r,sum=0;
    printf("The number =");
    scanf("%d",&number);
    temp=number;

    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;

    }

    printf("Sum of digits =%d\n",sum);

    getch();







}
