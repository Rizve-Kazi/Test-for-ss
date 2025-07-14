#include<stdio.h>
int main()
{
    int a,b,c,range,i;
    scanf("%d",&range);
    for(i=1;i<=range;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a<b && b<c)
        {
            printf("STAIR\n");
        }

        else if(a<b && b>c)
        {
            printf("PEAK\n");
        }

        else
        {
            printf("NONE\n");
        }
    }
    return 0;
}
