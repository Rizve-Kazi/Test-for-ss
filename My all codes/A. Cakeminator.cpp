#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    cin>>n>>m;

    char str[n][m];

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%c",&str[i][j]);
        }
    }

    int a=0;
    int b=0;

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(str[i][j]=='S')
            {
                b=(i+1)+(m-(i+1));

                printf("a = %d\n",b);
                continue;

            }
            else
            {
                a=a+m;
                printf("A = %d\n",a);
                break;
            }
        }
    }
//    cout<<a<<endl;
}
