#include<stdio.h>
int main()
{
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);

    int m = (a-1);
    int n = m*2;
    int p = m*4;

    if(n<=b && p<=c)
    {
        ans = m+n+p;
        printf("%d\n",ans);
    }

    else
    {
        printf("0\n");
    }

    return 0;
}
