#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,row_range,col_range;
    printf("Enter the range of row and colmn = ");
    scanf("%d %d",&row_range,&col_range);

    for(i=1; i<=row_range; i++)
    {
        for(j=1; j<=col_range; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

        printf("\n");
    }


    for(i=1; i<=row_range; i++)
    {
        for(j=1; j<=col_range; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }

        printf("\n");
    }

    for(i=1; i<=row_range; i++)
    {
        for(j=1; j<=col_range; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }

        printf("\n");
    }

    printf("\nA = ");

    for(i=1; i<=row_range; i++)
    {
        printf("\t");
        for(j=1; j<=col_range; j++)
        {
            printf("%d ",A[i][j]);
        }

        printf("\n");
    }


    printf("\nB = ");

    for(i=1; i<=row_range; i++)
    {
        printf("\t");
        for(j=1; j<=col_range; j++)
        {
            printf("%d ",B[i][j]);
        }

        printf("\n");
    }

    printf("\nC matrix is the sum of A and B matrix");
    printf("\nC = ");

    for(i=1; i<=row_range; i++)
    {
        printf("\t");
        for(j=1; j<=col_range; j++)
        {
            printf("%d ",C[i][j]);
        }

        printf("\n");
    }
    return 0;
}
