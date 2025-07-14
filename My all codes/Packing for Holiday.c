#include<stdio.h>
int main()
{
    int longs,width,hight,test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d %d %d",&longs,&width,&hight);
        if(longs<21 && width<21 && hight<21)
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }
    }
    return 0;
}
