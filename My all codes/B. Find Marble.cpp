#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    cin>>n>>s>>t;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    if(s==t || s==v[0])
    {
        if(s==t)
        {
            cout<<0<<endl;
        }
        else
        {
            int c=0;

            for(int i=0;i<n;i++)
            {
                if(v[i]==t)
                {
                    c=i;
                }
            }
            cout<<c<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
}
