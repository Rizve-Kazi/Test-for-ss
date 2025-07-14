#include<stdio.h>
int main()
{
    double range,i;
    double A[46];
    scanf("%lf",&range);

    A[0]=0.0;
    A[1]=1.0;

    for(i=2; i<=range; i++)
    {
        A[(int)i]=A[(int)i-1]+A[(int)i-2];

    }


    for(i=0; i<range; i++)
    {

        if(A[(int)i]!=range)
        {
            printf("%.0lf",A[(int)i]);
            printf(" ");
        }

    }

    return 0;
}
