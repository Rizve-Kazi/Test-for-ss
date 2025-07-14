#include<stdio.h>
int main()
{
    int range,i,number,year,j;
    scanf("%d",&range);
    for(i=1; i<=range; i++)
    {
        scanf("%d %d",&number,&year);
        int sum = 0;
        if(year==1)
        {
            sum = sum + pow(number,number);
        }

        else
        {
            for((j=(number-year)+1); j<=number; j++)
            {
                sum = sum + pow(j,j);
            }
        }
        if(sum%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
