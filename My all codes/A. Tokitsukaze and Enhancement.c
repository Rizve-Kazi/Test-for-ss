#include<stdio.h>
int main()
{
    int number;
    scanf("%d",&number);

    if(number%4==0)
    {
        printf("1 A\n");
    }

    else if(number%4==1)
    {
        printf("0 A\n");
    }

    else if(number%4==2)
    {
        printf("1 B\n");
    }

    else if(number%4==3)
    {
        printf("2 A\n");
    }
    return 0;
}
