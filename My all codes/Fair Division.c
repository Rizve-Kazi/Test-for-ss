#include<stdio.h>
int main()
{
    int range,n,sweet;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d",&n);
        int w1=0,w2=0;

        for(int j=1;j<=n;j++)
        {
            scanf("%d",&sweet);

            if(j%2==0)
            {
                w1 = w1  + sweet;
            }

            else if(j%2!=0)
            {
                w2 = w2 + sweet;
            }
        }
        if(w1==w2)
        {
            printf("YES\n");
        }

        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
