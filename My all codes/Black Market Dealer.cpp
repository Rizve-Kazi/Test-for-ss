#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<long long> v(n);
    vector<long long> v2(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<int> arr;

    for(int i = 0; i < n; i++)
    {
        arr.push_back(v2[i] - v[i]);
    }

    sort(arr.begin(), arr.end(), greater<int>());

    long long c = 0;
    for(int i = 0; i < k; i++)
    {
        c += arr[i];
    }

    cout << c << "\n";

    return 0;
}
