#include<stdio.h>
int main()
{
    int range,number,i,j,count=0;
    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        scanf("%d",&number);

        for(j=2; j<(number); j++)
        {
            if(number%j!=0)
            {
                count=0;

            }

                     if(count==0)
        {
            printf("%d eh primo\n",number);
        }

        else

        {
            printf("%d nao eh primo\n",number);
        }
        }

    }

    return 0;
}
