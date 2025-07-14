#include<stdio.h>
int main()
{
    int velocity,time,displacement;
    while(scanf("%d %d",&velocity,&time)!=EOF)
    {
        displacement=2*time*velocity;
        printf("%d\n",displacement);
    }
    return 0;
}
