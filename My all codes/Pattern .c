#include<stdio.h>
int main()
{
    int number,col,row;
    printf("Enter the range = ");
    scanf("%d",&number);

    for(row=1; row<=number; row++)
    {
        for(col=1; col<=number; col++)
        {
            if(row==1 || row==number || col==1 || col==number)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    for(row=number; row>=1; row--)
    {
        for(col=1; col<=number; col++)
        {
            if(row==1 || row==number || col==1 || col==number)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }

    printf("\n\n");

    for(row=1; row<=number; row++)
    {
        for(col=1; col<=number; col++)
        {
            if(col==1 || row==number ||  row==col)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    for(row=number; row>=1; row--)
    {
        for(col=1; col<=number; col++)
        {
            if(col==1 || row==number || col==row)
            {
                printf("*");
            }

            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    printf("\n\n");

    for(row=1; row<=number; row++)
    {
        for(col=1; col<=number; col++)
        {
            if(col==row || col+row==1+number)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }

    for(row=number; row>=1; row--)
    {
        for(col=1; col<=number; col++)
        {
            if(col==row || col+row==1+number)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }

        printf("\n");
    }
    return 0;
}
