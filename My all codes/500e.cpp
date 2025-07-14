#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="12345678901234567890123456";
    string s2="12345678901234567890123456";

    int a,b,c,carry=0;
    int i,j;

    string s;

    for(i=s1.size()-1,j=s2.size()-1; i>=0 && j>=0;i--,j--)
    {
        a=s1[i]-'0';
        b=s2[j]-'0';

        c=a+b+carry;

        s.push_back(c%10+'0');

        c=c/10;

        carry=c;
    }

    reverse(s.begin(),s.end());

    cout<<s<<endl;
}
