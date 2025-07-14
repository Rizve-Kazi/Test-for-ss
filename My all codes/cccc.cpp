#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="100";
    int a;
    int c,carry=0;
    string s;

    for(int i=s1.size()-1;i>=0;i--)
    {
        a=(s1[i]-'0')*9;
        c=a+carry;

        s.push_back(c%10+'0');

        c=c/10;
        carry=c;
    }
    reverse(s.begin(),s.end());

    cout<<s<<endl;
}
