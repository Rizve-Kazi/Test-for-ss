#include<stdio.h>
int main()
{
    int range,a,b;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d",&a,&b);

        if((a>1 || b>1))
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }
    }
    return 0;
}
