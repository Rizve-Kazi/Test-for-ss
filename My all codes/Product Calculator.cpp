#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    long long int mul = 1;
    int arr[105];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        mul = mul * arr[i];

        string s = to_string(mul);

        if (s.size() > k)
        {
            cout << "1" << endl;
            return 0;
        }
    }

    cout << mul << endl;

}
