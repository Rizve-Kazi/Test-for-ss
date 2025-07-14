#include<stdio.h>
int main()
{


int number,col,row;
scanf("%d",&number);
for(row=number;row>=1;row--)
{
    for(col=1;col<=row;col++)
    {
        printf("x ");
    }
    printf("\n");
}
}
