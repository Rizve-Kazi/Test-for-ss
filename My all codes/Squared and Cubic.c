#include<stdio.h>
int main()
{
    int row_range,row,col;
    scanf("%d",&row_range);
    for(row=1;row<=row_range;row++)
    {
        for(col=1;col<=3;col++)
        {
          if((row==1 && col==1)&&(col==2 && row==1)&& (col==3 && row==1))
          {
              printf("%d  ",row);

          }

          if(col==1)
          {
              printf("%d ",row);

          }
          if(col==2)
          {
              printf("%d ",row*row);
          }
          if(col==3)
          {
              printf("%d ",row*row*row);
          }
        }
        printf("\n");
    }
}
