#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,l,r,p,q;
    cin>>t;

    while(t--)
    {
        cin>>n>>m>>l>>r;
        if(m==1)
        {
            int ans=l+1;

            cout<<ans<<" "<<ans+1<<endl;
        }
        else if(m%2==0)
        {
            int ans=l+(m/2);
            cout<<ans<<" "<<ans+(m)<<endl;
        }
        else if(m%2!=0)
        {
            int ans=l+(m/2)+1;

            cout<<ans<<" "<<ans+(m)<<endl;
        }

    }

    return 0;
}
