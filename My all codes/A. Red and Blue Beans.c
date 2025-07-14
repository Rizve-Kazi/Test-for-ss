#include<stdio.h>
int main()
{
    int range,r,b,d;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d",&r,&b,&d);
        if((r>=1 && b>=1) && (r-b<=d))
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
