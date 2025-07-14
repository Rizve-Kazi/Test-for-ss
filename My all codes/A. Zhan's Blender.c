#include<stdio.h>
int main()
{
    int t,n,x,y,result,ans;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%d %d",&x,&y);

        if(x>=y)
        {
            result = n/y;
            ans = result*y;

            if(n>ans)
            {
                printf("%d\n",result+1);
            }

            else if(ans==n)
            {
                printf("%d\n",result);
            }
        }

        else if(y>x)
        {
            result = n/x;
            ans = result*x;

            if(n>ans)
            {
                printf("%d\n",result+1);
            }

            else if(ans==n)
            {
                printf("%d\n",result);
            }
        }

    }
    return 0;
}
