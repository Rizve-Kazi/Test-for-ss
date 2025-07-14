#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;

        printf("Case %d: ",i);

        vector<char>s2;


        for(int j=0; j<s.size(); i++)
        {
            if(s[j]>='0' && s[j]<='9')
            {
                for(int i=0; i<s[i]-'0'; i++)
                {
                    s2.push_back(s[j-1]);
                }
            }
            else
            {
                s2.push_back(s[j]);
            }
        }
        for(int i=0;i<s2.size();i++)
        {
            cout<<s2[i];
        }
        cout<<endl;
    }
}
