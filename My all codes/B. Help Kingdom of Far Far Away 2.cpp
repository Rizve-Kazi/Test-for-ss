#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string a,b;
    int m = s.size();

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.')
        {
            m=i;
        }
    }

    for(int i=0; i<m; i++)
    {
        a.push_back(s[i]);
    }

    for(int i=m+1; i<s.size(); i++)
    {
        b.push_back(s[i]);
    }

    if(a[0]=='-')
    {
        cout<<"($";
        a.erase(0,1);

        for(int i=a.size()-3; i>0; i=i-3)
        {
            a.insert(i,1,',');
        }

        cout<<a;
        cout<<".";

        if(b.size()>=2)
        {
            for(int i=0; i<2; i++)
            {
                cout<<b[i];
            }
            cout<<")\n";
        }
        else
        {
            cout<<b;
            for(int i=0; i<2-b.size(); i++)
            {
                cout<<0;
            }
            cout<<")\n";
        }
    }
    else
    {
        cout<<"$";

        for(int i=a.size()-3; i>0; i=i-3)
        {
            a.insert(i,1,',');
        }

        cout<<a;
        cout<<".";

        if(b.size()>=2)
        {
            for(int i=0; i<2; i++)
            {
                cout<<b[i];
            }
            cout<<"\n";
        }
        else
        {
            cout<<b;
            for(int i=0; i<2-b.size(); i++)
            {
                cout<<0;
            }
            cout<<"\n";
        }
    }
}
