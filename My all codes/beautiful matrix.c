#include<stdio.h>
int main()
{
    int i,j,value;
    int position_one=0,position_two=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            scanf("%d",&value);

            if(value==1)
            {
                position_one=i;
                position_two=j;
                printf("%d\n",abs(3-position_one)+ abs(3-position_two));
            }

        }
    }

    return 0;
}
