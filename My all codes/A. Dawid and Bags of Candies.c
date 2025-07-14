
#include<stdio.h>
int main()
{
    int a,b,c,d,sum1,sum2;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    sum1 = a+c;
    sum2 = b+d;

    if(sum1==sum2)
    {
        printf("YES\n");
    }

    else if(sum1!=sum2)
    {
        printf("NO\n");
    }
    return 0;
}
