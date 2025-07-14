#include<bits/stdc++.h>
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

    int a = v[0] - 1;

    for (int i = 0; i < m - 1; i++)
    {
        if (v[i + 1] >= v[i])
        {
            a = a + (v[i + 1] - v[i]);
        }
        else
        {
            a = a + (n - v[i] + v[i + 1]);
        }
    }

    cout << a << endl;
}
