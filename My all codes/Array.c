#include<stdio.h>
int main()
{
    int i,A[40],range;
    printf("Enter the range = ");
    scanf("%d",&range);

    A[0] = 0;
    A[1] = 1;

    printf("\nThe fibonacci seris = ");

    for(i=2; i<range; i++)
    {
        A[i] = A[i-2] + A[i-1];
    }

    for(i=0; i<range; i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");

    return 0;

}
