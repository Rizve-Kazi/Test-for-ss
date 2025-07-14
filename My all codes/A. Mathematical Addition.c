#include<stdio.h>
int main()
{
    int range,x,y,a;
    long long int u;
    long long int v;

    scanf("%d",&range);

    for(int i=0;i<range;i++)
    {
        scanf("%lld %lld",&u,&v);

        x = pow(u,2);
        y = pow(v,2);
        a = (-x);

        printf("%d %d\n",a,y);
    }
    return 0;

}
