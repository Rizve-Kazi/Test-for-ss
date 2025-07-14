#include<stdio.h>
int main()
{
    int number,col,row;
    printf("Enter the range = ");
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=number-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("%c",col+64);
        printf("\n");
    }

    for(row=number;row>=1;row--)
    {
        for(col=1;col<=number-row;col++)
            printf(" ");
        for(col=1;col<=row;col++)
            printf("%c",col+64);
            printf("\n");
    }



}
