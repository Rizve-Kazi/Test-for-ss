#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int len = 0;

        for (int j = i; j < n; j++)
        {
            sum += v[j];
            len++;

            if (sum <= m)
            {
                a.push_back(len);
            }
            else
            {
                break;
            }
        }
    }

    if (!a.empty())
    {
        auto it = max_element(a.begin(), a.end());
        cout << *it << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}
