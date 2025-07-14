#include<stdio.h>
int main()
{
    int range,i,sub,a,b;
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d %d",&a,&b);

        sub = b-a;
        printf("%d\n",sub);
    }
    return 0;
}
