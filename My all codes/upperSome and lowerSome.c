#include<stdio.h>
int main()
{
    int A[10][10],i,j,row,col,upper_Some = 0,lower_Some = 0;
    printf("Enter the row and column = ");
    scanf("%d %d",&row,&col);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i<j)
            {
                upper_Some = upper_Some + A[i][j];
            }

            if(j<i)
            {
                lower_Some = lower_Some + A[i][j];
            }
        }
    }




    printf("\nA = ");

    for(i=1; i<=row; i++)
    {
        printf("\t");
        for(j=1; j<=col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("\nUpper some = %d\n",upper_Some);
    printf("Lower some = %d\n",lower_Some);

    return 0;

}
