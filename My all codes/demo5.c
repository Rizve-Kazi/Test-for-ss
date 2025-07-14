#include<stdio.h>
int main()
{
    int A[5],i,j=1,sum=0;
    for(i=0;i<=2;i++)
    {
        printf("\n");
        scanf("%d",&A[i]);

      while(j<=A[i])
        {
           sum = sum + j;
           j++;
        }
         printf("Sum = %d\n",sum);

    }

}
