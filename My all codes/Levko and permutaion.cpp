#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    if(n==m)
    {
        cout<<"-1"<<endl;
    }
    else if(n-m==1)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<2+m<<" ";

        for(int i=2; i<=(2+m-1); i++)
        {
            cout<<i<<" ";
        }
        for(int i=2+m+1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<"1\n";
    }
    return 0;
}
