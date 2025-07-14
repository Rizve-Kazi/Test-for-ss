#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, c;
    vector<int> v;

    cin >> n >> c;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int max = v[0];
    int min = v[0];

    for(int i = 0; i < n; i++)
    {
        if(v[i] > max)
        {
            max = v[i];
        }
        if(v[i] < min)
        {
            min = v[i];
        }
    }

    if(max - min > c)
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < v[i]; j++)
        {
            cout << (j ) + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
