#include<stdio.h>
int main()
{
    int range,result,ans;
    long long int n,j;
    scanf("%d",&range);

    for(int i=1; i<=range; i++)
    {
        scanf("%lld",&n);
        int count=0,cnt=0;

        for( int j=1; j<=n; j++)
        {
            result = pow(j,2);
            ans = pow(j,3);

            if(result<=n)
            {

                count++;
            }
            else if(ans<=n)
            {
                cnt++;
            }


        }
        printf("%d\n",count+cnt);

    }
}
