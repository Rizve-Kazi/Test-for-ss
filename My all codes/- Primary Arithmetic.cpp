#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, s2;
    cin >> s >> s2;

    // দুইটাকেই সমান দৈর্ঘ্যে আনব
    while(s.size() < s2.size()) s = '0' + s;
    while(s2.size() < s.size()) s2 = '0' + s2;

    int c = 0;
    string v = "";

    for(int i = s.size() - 1; i >= 0; i--)
    {
        int sum = (s[i] - '0') + (s2[i] - '0') + c;
        v.push_back((sum % 10) + '0');
        c = sum / 10;
    }

    if(c) v.push_back(c + '0');

    reverse(v.begin(), v.end());
    cout << v << endl;
}
