#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s2;

    cin >> s;
    cin >> s2;

    string str2;

    for(int i = 0; i < s2.size(); i++)
    {
        str2.push_back(s2[i]);
    }

    sort(str2.begin(), str2.end());
    auto it = unique(str2.begin(), str2.end());
    str2.erase(it, str2.end());

    vector<int> v;
    for(int i = 0; i < str2.size(); i++)
    {
        int count = 0;
        for(int j = 0; j < s2.size(); j++)
        {
            if(str2[i] == s2[j])
            {
                count++;
            }
        }
        v.push_back(count);
    }

    vector<int> v2;
    for(int i = 0; i < str2.size(); i++)
    {
        int count = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(str2[i] == s[j])
            {
                count++;
            }
        }
        v2.push_back(count);
    }

    int sum = 0;

    for(int i = 0; i < str2.size(); i++)
    {
        sum += min(v[i], v2[i]);
    }

    if(sum==0)
    {
        cout<<"-1\n";
    }
    else
    {
        cout<<sum<<endl;
    }
}
