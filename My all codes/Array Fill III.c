#include<stdio.h>
int main()
{
    double number;
    int j=0,N[100];

    scanf("%lf",&number);
    double i=number;

    while(j<=99 && i>=(double)-100000)
    {
        printf("N[%d] = %.4lf\n",j,i);
        j++;
        i = i - i/2;
    }

    return 0;

}
