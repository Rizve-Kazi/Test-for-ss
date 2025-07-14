#include<stdio.h>
int main()
{
    int a,b,c,range,i,sum=0;
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
         scanf("%d %d %d",&a,&b,&c);

         sum = sum + (a+b+c);
    }
    if(sum==0)
    {
        printf("YES\n");
    }

    else if(sum>0 && sum<0)
    {
        printf("NO\n");
    }

    return 0;
}
