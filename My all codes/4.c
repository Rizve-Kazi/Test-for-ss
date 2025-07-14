#include<stdio.h>
#include<math.h>
int main()
{
    long long  number_one,number_two;
    double n1,n2,result1=1,result2=1,gcd,rem;
    scanf("%lld %lld",&number_one,&number_two);

    for(int i=1; i<=number_one; i++)
    {
        result1 = result1*i;
    }

    for(int i=1; i<=number_two; i++)
    {
        result2 = result2*i;
    }


    n1=result1;
    n2=result2;

    if(n1>=n2)
    {
        while(n2!=0)
        {
            rem=remainder(n1,n2);
            n1=n2;
            n2=rem;
        }
        gcd=n1;
        printf("%.0lf\n",gcd);
    }
    else if(n2>n1)
    {
        while(n1!=0)
        {
            rem=remainder(n2,n1);
            n2=n1;
            n1=rem;
        }
        gcd=n2;
        printf("%.0lf\n",gcd);
    }

    return 0;
}
