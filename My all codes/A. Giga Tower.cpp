#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,j,t;
    scanf("%I64d",&n);
    i=n;
    for(;;)
    {
        i++;
        j=i;
        while(j)
        {
            if(j%10==8 || (-j%10==8))
            {

                printf("%I64d",i-n);
                return 0;
            }
            else
            {
                j/=10;
            }
        }
    }
    return 0;
}
