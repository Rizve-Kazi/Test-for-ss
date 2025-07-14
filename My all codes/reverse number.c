#include<stdio.h>
int main()
{
    int r,temp,number,reverse=0;

    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        r=temp%10;
        reverse=reverse*10+r;
        temp=temp/10;
    }

    printf("Reverse =%d\n",reverse);
    getch();
}
