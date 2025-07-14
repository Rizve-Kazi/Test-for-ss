#include<stdio.h>
int main()
{
    int number,col,row;
    printf("Enter the number = ");
    scanf("%d",&number);
 +   for(row=1;row<=number;row++)
  +  {S
        for(col=1;col<=number-row;col++)
        {
            printf("");

        }

        for(col=1;col<=row;col++)
        {
            printf("%d ",col);

        }
         printf("\n");
    }

    for(row=number;row>=1;row--)
    {
        for(col=1;col<=number-row;col++)
        {
            printf("%d ",col);
        }
        for(col=1;col<=row;col++)
        {
            printf("%d ",col);
        }

        printf("\n");
    }
}
*
