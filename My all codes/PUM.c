#include<stdio.h>
int main()
{
    int row,col,range;
    scanf("%d",&range);

    for(row=1;row<=range*4;row=row+4)
    {
        for(col=0;col<=2;col++)
        {
            printf("%d ",col+row);
        }
        printf("PUM\n");
    }
    return 0;
}
