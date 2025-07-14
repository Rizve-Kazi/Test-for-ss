#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    string s;
    int j=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            s[j++]=str[i];
        }

        else
        {
            s[j]='\0';
            reverse(s.begin(),s.end());
            cout<<s<<" ";
            j=0;
        }
        cout<<endl;

    }
}
