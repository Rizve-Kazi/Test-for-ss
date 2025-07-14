#include<stdio.h>
int main()
{
    int test;
    char string[100];
    long long int taka,sum;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%s",&string);
        if(strcmp(string,"donate")==0)
        {
            scanf("%lld",&taka);

            sum=sum+taka;
        }

        if(strcmp(string,"report")==0)
        {
            printf("%lld\n",sum-16);

        }
    }

    return 0;
}
