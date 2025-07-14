
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len=s.size();
    int c=0,b=0;

    for(int i=0; i<len; i++)
    {
        if(s[i]=='4')
        {
            c++;
        }
        else if(s[i]=='7')
        {
            b++;
        }
    }

    if(c+b==s.size() && b==c && len%2==0)
    {
        cout<<s<<endl;
    }
    else if(len%2!=0)
    {
        for(int i=0; i<(len/2)+1; i++)
        {
            cout<<47;
        }
    }
    else
    {
        for(int i=0; i<len/2; i++)
        {
            cout<<47;
        }
    }

}
