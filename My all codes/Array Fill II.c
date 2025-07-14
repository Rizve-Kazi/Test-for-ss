#include<stdio.h>
int main()
{
    int N[1000],i=0,j,range;
    scanf("%d",&range);

    while(i<=1000)
    {
        for(j=0; j<range; j++)
        {

            printf("N[%d] = %d\n",i,j);
            i++;
            if(N[i]==1000 && j!=0)

            {
                break;
            }
        }
    }

    return 0;
}
