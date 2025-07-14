#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n && n >= 0)
    {
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> v;
        while (n != 0)
        {
            int rem = n % 3;
            v.push_back(rem);
            n = n / 3;
        }

        reverse(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i];
        }
        cout << endl;
    }

    return 0;
}
