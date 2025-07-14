#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],multiple[10][10],i,j,k,r1,r2,c2,c1,sum=0;

    printf("\nEnter the frist metrix row and column = ");
    scanf("%d %d",&r1,&c1);

    printf("\nEnter the second metrix row and column = ");
    scanf("%d %d",&r2,&c2);


    while(c1!=r2)
    {
        printf("Error!! Please enter the right row and column.\n");

        printf("\nEnter the frist metrix row and column = ");
        scanf("%d %d",&r1,&c1);

        printf("\nEnter the second metrix row and column = ");
        scanf("%d %d",&r2,&c2);


    }

    for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c1; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }


    for(i=1; i<=r2; i++)
    {
        for(j=1; j<=c2; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }



    for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c2; j++)
        {
            for(k=1; k<=c1; k++)
            {
                sum = sum + A[i][k]*B[k][j];
            }
            multiple[i][j] = sum;
            sum = 0;
        }
    }

    printf("\nA = ");

    for(i=1; i<=c1; i++)
    {
        printf("\t");
        for(j=1; j<=r1; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\nB = ");

    for(i=1; i<=c2; i++)
    {
        printf("\t");
        for(j=1; j<=r2; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("\nC is multiple of A and B metrix.");

    printf("\nC = ");

    for(i=1; i<=c1; i++)
    {
        printf("\t");
        for(j=1; j<=r2; j++)
        {
            printf("%d ",multiple[i][j]);
        }
        printf("\n");
    }

    return 0;

}
