#include<stdio.h>
int main()
{
    int a;
    long long int b;
    char ch;
    float d;
    double e;

    scanf("%d",&a);
    scanf("%lld",&b);
    getchar();
    scanf("%c",&a);
    scanf("%f",&d);
    scanf("%lf",&e);

    printf("%d\n",a);
    printf("%lld\n",b);
    getchar();
    printf("%c\n",ch);
    printf("%0.2f\n",d);
    printf("%0.1lf\n",e);
}
