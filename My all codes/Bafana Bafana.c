#include<stdio.h>
#include<math.h>
int main()
{
    int test,n,k,p;
    int sum,sub;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        sum=(k+p);
        if(p%n==0)
        {
            printf("Case %d: %d\n",i,k);
        }
        else if(n>=sum)
        {
            printf("Case %d: %d\n",i,sum);
        }
        else
        {
            printf("Case %d: %d\n",i,sum%n);
        }
    }
    return 0;
}
