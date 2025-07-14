#include<stdio.h>
int main()
{
    int range,n1,n2,n3;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d",&n1,&n2,&n3);

        if((n1+n2)>=10)
        {
            printf("YES\n");
        }

        else if((n2+n3)>=10)
        {
            printf("YES\n");
        }

        else if((n3+n1)>=10)
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
