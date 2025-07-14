#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>b;
    vector<int>a(n);

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b.push_back(a[i]);
    }

    sort(b.begin(),b.end(),greater<int>());
    vector<int>sorted_b = b; // copy for printing later

    vector<int>c;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i]==b[j])
            {
                c.push_back(i);
                b.erase(b.begin()+j);
                break;
            }
        }
    }

    cout<<sorted_b[m-1]<<endl;

    for(int i=0;i<m;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
}
