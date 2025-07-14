#include<stdio.h>
int main()
{
    int a,b,ans1,ans2,result;
    while(1)
//    for(int i=1; i<=200; i++)
    {
        scanf("%d %d",&a,&b);

        if(a<=-1 || b<=-1)
        {
            break;
        }

        ans1=abs(a-b);
        ans2=99-b+a+1;

        if(ans1>=ans2)
        {
            printf("%d\n",ans2);
        }
        else if(ans2>ans1)
        {
            printf("%d\n",ans1);
        }

    }

    return 0;
}
