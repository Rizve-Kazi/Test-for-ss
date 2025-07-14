#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if (sum % n != 0)
    {
        cout << "Unrecoverable configuration." << endl;
        return 0;
    }

    int a = sum / n;
    int count = 0, c = 0, b = 0;

    for (int i = 0; i < n; i++)
    {
        if (a == v[i])
        {
            count++;
        }
        else if (a > v[i])
        {
            c++;
        }
        else
        {
            b++;
        }
    }

    int minimum = *min_element(v.begin(), v.end());
    int maximum = *max_element(v.begin(), v.end());

    if (count == n)
    {
        cout << "Exemplary pages." << endl;
    }
    else if (b == 1 && c == 1 && (maximum - a == a - minimum))
    {
        int p = -1, q = -1;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == maximum)
            {
                p = i + 1;
            }
            if (v[i] == minimum)
            {
                q = i + 1;
            }
        }
        printf("%d ml. from cup #%d to cup #%d.\n", maximum - a, q, p);
    }
    else
    {
        cout << "Unrecoverable configuration." << endl;
    }

    return 0;
}
