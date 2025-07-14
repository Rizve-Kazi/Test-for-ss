#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (m >= v1[i] || m >= v2[i])
        {
            ans++;
        }
    }

    if (ans == m)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << m - ans << endl;
    }

    return 0;
}
