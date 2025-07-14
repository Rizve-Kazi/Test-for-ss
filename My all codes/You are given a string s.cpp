#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;

        cin>>s;

        int c=0;


        string result;
        unordered_set<char> seen;

        for (char c : s)
        {
            if (seen.insert(c).second)
            {
                result += c;
            }
        }

        int a=s.size()-result.size();

        if(n>=3 &&  a>=1)
        {
            if(a==1 && s[0]==s[s.size()-1])
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}

