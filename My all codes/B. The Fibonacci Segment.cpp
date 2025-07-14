#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);  // Use long long for large values.

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if(n == 2)
    {
        cout << 2 << endl;
        return 0;
    }

    int max_len = 2;
    int curr_len = 2;

    for(int i = 2; i < n; i++)
    {
        if(v[i] == v[i-1] + v[i-2])
        {
            curr_len++;
            max_len = max(max_len, curr_len);
        }
        else
        {
            curr_len = 2;
        }
    }

    cout << max_len << endl;

    return 0;
}
