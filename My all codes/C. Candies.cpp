#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int rem = n % m;

    if(rem == 0)
    {
        for(int i = 0; i < m; i++)
        {
            cout << n / m << " ";
        }
        cout << endl;
    }
    else
    {
        int ans = m - rem;

        for(int i = 0; i < ans; i++)
        {
            cout << n / m << " ";
        }

        for(int i = 0; i < rem; i++)
        {
            cout << (n / m) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
