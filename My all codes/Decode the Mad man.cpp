#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "`1234567890-=";
    string s2 = "qwertyuiop[]\\";
    string s3 = "asdfghjkl;'";
    string s4 = "zxcvbnm,./";

    string str;

    while(getline(cin, str))
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        for(int i = 0; i < str.size(); i++)
        {
            for(int j = 2; j < s1.size(); j++)
            {
                if(str[i] == s1[j])
                {
                    str[i] = s1[j - 2];
                    break;
                }
            }
            for(int j = 2; j < s2.size(); j++)
            {
                if(str[i] == s2[j])
                {
                    str[i] = s2[j - 2];
                    break;
                }
            }
            for(int j = 2; j < s3.size(); j++)
            {
                if(str[i] == s3[j])
                {
                    str[i] = s3[j - 2];
                    break;
                }
            }
            for(int j = 2; j < s4.size(); j++)
            {
                if(str[i] == s4[j])
                {
                    str[i] = s4[j - 2];
                    break;
                }
            }
        }
        cout << str << endl;
    }

    return 0;
}
