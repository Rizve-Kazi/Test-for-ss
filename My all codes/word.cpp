#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    s = s + ' ';

    string word;

    for(int i=0;i<s.size();i++)
    {
        int m=0;

        if(s[i]!=' ')
        {
            word[m++]=s[i];
            word[m]='\0';
        }
        else
        {
            reverse(word.begin(),word.end());

            cout<<word<<" ";

            m=0;
            word[m]='\0';
        }
    }
    cout<<endl;


}
