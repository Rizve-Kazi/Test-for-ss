#include<stdio.h>
int main()
{
    int row,col,range,A[100][100];
    scanf("%d",&range);


    for(row=1;row<=range;row++)
    {
        printf("\t");
        for(col=1;col<range;col++)
        {
            if(row==col)
            {
                printf("2 ");
            }
            printf("1 ");
        }
        printf("\n");
    }
}
