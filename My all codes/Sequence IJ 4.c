#include<stdio.h>
int main()
{
    int i,j,k;
    double m,n;

    for(i=1; i<=3; i++)
    {
        printf("I=0 J=%d\n",i);
    }

    for(m=1.2; m<=3.2; m++)
    {
        printf("I=0.2 J=%.1lf\n",m);
    }

    for(m=1.4; m<=3.4; m++)
    {
        printf("I=0.4 J=%.1lf\n",m);
    }

    for(m=1.6; m<=3.6; m++)
    {
        printf("I=0.6 J=%.1lf\n",m);
    }

    for(m=1.8; m<=3.8; m++)
    {
        printf("I=0.8 J=%.1lf\n",m);
    }



    for(j=2; j<=4; j++)
    {
        printf("I=1 J=%d\n",j);
    }



    for(n=2.2; n<=4.2; n++)
    {
        printf("I=1.2 J=%.1lf\n",n);
    }

    for(n=2.4; n<=4.4; n++)
    {
        printf("I=1.4 J=%.1lf\n",n);
    }

    for(n=2.6; n<=4.6; n++)
    {
        printf("I=1.6 J=%.1lf\n",n);
    }

    for(n=2.8; n<=4.8; n++)
    {
        printf("I=1.8 J=%.1lf\n",n);
    }


    for(k=3; k<=5; k++)
    {
        printf("I=2 J=%d\n",k);
    }
    return 0;
}
