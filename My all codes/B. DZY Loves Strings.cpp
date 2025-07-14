#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k;
    vector<int> v(26);

    cin >> s >> k;

    for (int i = 0; i < 26; i++)
    {
        cin >> v[i];
    }

    int max_val = *max_element(v.begin(), v.end());

    long long int sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        sum += v[s[i] - 'a'] * (i + 1);
    }

    for (int i = s.size(); i < s.size() + k; i++)
    {
        sum += max_val * (i + 1);
    }

    cout << sum << endl;

    return 0;
}
