#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;

    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int max_money = b;

    for(int i=0; i<n; i++)
    {
        int dollars = b / a[i];
        int rem = b % a[i];

        for(int j=i+1; j<n; j++)
        {
            int total = dollars * a[j] + rem;
            max_money = max(max_money, total);
        }
    }

    cout << max_money << endl;
}
