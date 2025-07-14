#include<stdio.h>
int main()
{
    double sum=0;
    float i=3,j=2;
    while(i<=39)
    {
        while(j<=1000000)
        {
            sum = sum + i/j;
            i = i+2;
            j = j*2;
        }
        printf("%.2lf\n",sum+1);
    }

    return 0;
}
