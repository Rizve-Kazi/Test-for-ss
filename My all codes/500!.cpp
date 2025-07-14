#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  str2{"12345678901234567890123456"};
    string str1= {"12345678901234567890123456"};
    string s;

    int carry=0;
    int a,b,c,m=0;
    int i,j;

    for(i=str1.size(),  j=str2.size(); i>=0 && j>=0; i--,j--)
    {
        a=str1[i]-'0';
        b=str2[j]-'0';

        c=a+b+carry;
        s[m++]=c+'0';

        if(c>9)

        {
            c=c/10;
            carry=c;
            s[m++]=c%10+'0';
        }


    }

//    s[m]='\0';

    reverse(s.begin(), s.end());

    cout<<s<<endl;
}
