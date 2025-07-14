#include<stdio.h>
int main()
{
    int number,col,row,count=0;
    printf("Enter the range = ");
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=number-row;col++)
        {
            printf("%d ",++count);
        }
        printf("\n");
    }
}
