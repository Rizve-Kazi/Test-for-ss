#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    getline(cin,str);

    int a=0,b=0;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='4')
        {
            a++;
        }
        if(str[i]=='7')
        {
            b++;
        }
    }
    if(a==0 && b==0)
    {
        cout<<"-1"<<endl;
    }
    else if(a>=b)
    {
        cout<<"4"<<endl;
    }
    else if(b>a)
    {
        cout<<"7"<<endl;
    }

    return 0;
}
