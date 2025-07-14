#include<stdio.h>
int main()
{
    int range,number,i,j,limit;
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d",&number);
        scanf("%d",&limit);

        int sum = 0;

       if(number%2==0)
       {
           for(j=number+1;j<=number+1+limit*2-2;j=j+2)
           {
               if(j%2!=0)
               {
                   sum = sum + j;
               }
           }
           printf("%d\n",sum);
       }

       else if(number%2!=0)
       {
           for(j=number;j<=number+limit*2-1;j++)
           {
               if(j%2!=0)
               {
                   sum = sum + j;
               }
           }
            printf("%d\n",sum);
       }
    }
    return 0;
}
