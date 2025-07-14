#include<stdio.h>
int main()
{
    int col,row,range;
    scanf("%d",&range);

    for(col=1; col<=3; col++)
    {
        if(row==1)
        {
            printf("%d ",row);
        }
        for(row=1; row<=range; row++)
        {
            for(int j=1; j<=2; j++)

            {
                printf("%d\n",row);

                if(col==1 && (row!=2 && row!=3))
                {
                    printf("\n");
                }
            }
        }
    }
}
