#include<stdio.h>
int main()
{
    int number,col,row;
    scanf("%d",&number);
    for(row=1;row<=number;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+64);
        }
        printf("\n");
}
for(row=number-1;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
        printf("%c ",row+64);
    }
    printf("\n");
}






}
