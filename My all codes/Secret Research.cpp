#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='S' && (s[i]=='1' || s[i]=='4' || (s[i]=='7' && s[i+1]=='8')))
            {
                cout<<"+\n";
            }
            else if(s[i]=='S' && s[i+1]=='3' && s[i+2]=='5')
            {
                cout<<"-\n";
            }
            else if(s[i]=='S' && s[i-1]=='9' && s[i+1]=='4')
            {
                cout<<"*\n";
            }
            else if(s[i]=='S' && s[i-1]=='0' && s[i-2]=='9' && s[i-3]=='1')
            {
                cout<<"?\n";
            }
        }
    }
    return 0;

}
