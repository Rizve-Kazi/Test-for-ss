#include<stdio.h>
int main()
{
    int number,col,row;
    printf("Enter the range = ");
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=number;col++)
        {
            if(col==row || col+row==number+1)
                printf("*");
            else
                printf(" ");

        }
        printf("\n");
    }
}
