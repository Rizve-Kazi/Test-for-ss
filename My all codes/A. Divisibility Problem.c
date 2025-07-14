#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,test;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d %d",&a,&b);

        if(a%b==0)
        {
            printf("0\n");
        }
        else
        {
            int ans=b-(a%b);
            printf("%d\n",ans);
        }
    }
    return 0;

}
