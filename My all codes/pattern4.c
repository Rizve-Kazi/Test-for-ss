#include<stdio.h>
int main()
{
    int number,row,col;
    scanf("%d",&number);
    for(row=1; row<=number; row++)
    {
        for(col=1; col<=number-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%c",col+64);
        }
        printf("\n");

    }

    return 0;
}
