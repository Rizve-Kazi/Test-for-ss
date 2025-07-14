#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int m = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        int j = i - 1;

        while (j >= 0 && v[j] <= v[j + 1])
        {
            count++;
            j--;
        }

        j = i + 1;

        while (j < n && v[j] <= v[j - 1])
        {
            count++;
            j++;
        }

        m = max(m, count);
    }

    cout << m<< endl;

    return 0;
}
