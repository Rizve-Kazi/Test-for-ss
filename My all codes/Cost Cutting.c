#include<stdio.h>
int main()
{
    int time,i,a,b,c;
    scanf("%d",&time);
    for(i=1;i<=time;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if((b>a && a>c) || (c>a && a>b))
        {
            printf("Case %d: %d\n",i,a);
        }
        else if((a>b && b>c) || (c>b && b>a))
        {
            printf("Case %d: %d\n",i,b);
        }
        else if((a>c && c>b) || (b>c && c>a))
        {
            printf("Case %d: %d\n",i,c);
        }
    }
    return 0;
}
