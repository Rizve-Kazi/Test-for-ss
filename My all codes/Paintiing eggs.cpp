#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>v2(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i]>>v2[i];
    }

    int sa=0;
    int sg=0;

    for(int i=0; i<n; i++)
    {
        if(sa+v[i]-sg<=500)
        {
            cout<<"A";
            sa=sa+v[i];
        }
        else
        {
            cout<<"G";
            sg=sg+v2[i];
        }
    }
    cout<<endl;
}

