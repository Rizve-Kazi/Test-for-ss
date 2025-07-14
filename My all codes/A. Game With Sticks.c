#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    if(n>=m)
    {
        if(m%2==0)
        {
            printf("Malvika\n");
        }
        else if(m%2!=0)
        {
            printf("Akshat\n");
        }
    }
    else if(m>n)
    {
        if(n%2==0)
        {
            printf("Malvika\n");
        }
        else if(n%2!=0)
        {
            printf("Akshat\n");
        }
    }
    return 0;
}
