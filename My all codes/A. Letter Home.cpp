#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,s;
        cin>>n>>s;

        vector<int>v(n);

        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }

        if(n==1)
        {
            cout<<abs(v[0]-s)<<endl;
        }
        else
        {
            int m=*max_element(v.begin(),v.end());
            int r=*min_element(v.begin(),v.end());

            int c=abs(s-r)+(m-r);
            int d=abs(s-m)+(m-r);

            if(c>=d)
            {
                cout<<d<<endl;
            }
            else
            {
                cout<<c<<endl;
            }
        }

    }
}

