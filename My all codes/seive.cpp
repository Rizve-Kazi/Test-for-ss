#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<bool>prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=2;i*i<=n;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
