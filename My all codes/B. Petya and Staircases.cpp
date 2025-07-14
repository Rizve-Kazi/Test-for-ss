#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < m; i++)
    {
        if (v[i] == 1 || v[i] == n)
        {
            cout << "NO\n";
            return 0;
        }
    }

    for (int i = 0; i <= m - 3; i++)
    {
        if ((v[i + 1] - v[i] == 1) && (v[i + 2] - v[i + 1] == 1))
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
