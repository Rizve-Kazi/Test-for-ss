#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    if(m>n)
    {
        cout<<"-1\n";
    }

    else
    {
        int ans=(n/2);

        if(ans%m==0 && (ans*2==n))
        {
            cout<<ans<<endl;
        }
        else
        {
            int result=(ans/m);
            cout<<(result+1)*m<<endl;
        }
    }
}
