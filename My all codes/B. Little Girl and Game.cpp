#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int length = s.size();
    string s2 = s;

    sort(s2.begin(), s2.end());
    auto it = unique(s2.begin(), s2.end());
    s2.erase(it, s2.end());

    vector<int> v;
    for (int i = 0; i < s2.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (s2[i] == s[j])
            {
                count++;
            }
        }
        v.push_back(count);
    }

    int oddCount = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 == 1)
        {
            oddCount++;
        }
    }

    if (oddCount == 0 || oddCount % 2 == 1)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

    return 0;
}
