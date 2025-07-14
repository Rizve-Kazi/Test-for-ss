#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total;
    cin >> n >> total;

    vector<int> v(n);
    vector<int> v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i] >> v2[i];
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += v[i];
        sum2 += v2[i];
    }

    if (total >= sum1 && total <= sum2)
    {
        cout << "YES\n";

        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());

        vector<int> m(v.size() + v2.size());

        merge(v.begin(), v.end(), v2.begin(), v2.end(), m.begin());

        int max_val = *max_element(m.begin(), m.end());
        int min_val = *min_element(m.begin(), m.end());

        for (int i = min_val; i <= max_val; i++)
        {
            for (int j = i + 1; j <= max_val; j++)
            {
                if (i + j == total)
                {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
