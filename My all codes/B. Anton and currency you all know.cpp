#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int>v;

    for(int i = 0; i < s.size(); i++)
    {
        if((s[i] - '0') % 2 == 0)
        {
            v.push_back(s[i] - '0');
        }
    }

    if(v.size() == 0)
    {
        cout << "-1\n";
    }
    else
    {
        int mx = *max_element(v.begin(), v.end());
        int mn = *min_element(v.begin(), v.end());
        int c = -1;

        for(int i = 0; i < s.size(); i++)
        {
            if((s[i] - '0') % 2 == 0 && (s[i] - '0') == mx)
            {
                c = i;
                break;
            }
        }

        if(c != -1)
        {
            swap(s[c], s[s.size() - 1]);
        }

        cout << s << endl;
    }

    return 0;
}
