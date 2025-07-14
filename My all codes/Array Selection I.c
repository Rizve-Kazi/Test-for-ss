#include<stdio.h>
int main()
{
    float A[100];
    int i,j;
    for(i=1;i<=5;i++)
    {

        scanf("%f",&A[i]);

        if(A[i]<=(float)10.00)
        {
            printf("A[%d] = %.1f\n",i,A[i]);
        }
    }
}
