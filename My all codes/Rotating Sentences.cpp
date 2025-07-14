#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    while(getline(cin,s))
    {
        stringstream ss(s);
        string s2;

        while(ss>>s2)
        {
            reverse(s2.begin(),s2.end());

            cout<<s2<<" ";
        }
        cout<<endl;
    }
}
