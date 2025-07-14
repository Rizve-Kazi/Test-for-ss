#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char str[n][n];

    for(int i=0; i<n; i++)
    {
        scanf("%s",&str[i]);
    }

    char x=str[0][0];
    char y=str[0][1];

    if(x==y)
    {
        cout<<"NO\n";
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j || i+j==n-1)
            {
                if(str[i][j]!=x)
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
            else if(str[i][j]!=y)
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
}
