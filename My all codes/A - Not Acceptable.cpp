#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;

    cin>>a>>b>>c>>d;

    if((a>c) || (c==a && b>d))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
}
