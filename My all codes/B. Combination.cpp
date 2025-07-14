#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n), v1(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i] >> v1[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (v1[i] < v1[j] || (v1[i] == v1[j] && v[i] < v[j]))
            {
                swap(v1[i], v1[j]);
                swap(v[i], v[j]);
            }
        }
    }

    int c = 0, b = 1;

    for(int i = 0; i < n; i++)
    {
        if(b <= 0)
            break;

        c += v[i];
        b = b + v1[i] - 1;
    }

    cout << c << endl;

    return 0;
}
