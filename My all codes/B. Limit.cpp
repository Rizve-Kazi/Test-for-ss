#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n+2);
    vector<int> v1(m+2);

    for(int i = 0; i < n+1; i++)
    {
        cin >> v[i];
    }

    for(int j = 0; j < m+1; j++)
    {
        cin >> v1[j];
    }

    if(n > m)
    {
        if(v[0] * v1[0] >= 0)
        {
            cout << "Infinity" << endl;
        }
        else
        {
            cout << "-Infinity" << endl;
        }
    }
    else if(n == m)
    {
        int a = v[0];
        int b = v1[0];
        int g = __gcd(abs(a), abs(b));
        a /= g;
        b /= g;

        if(b < 0)
        {
            a = -a;
            b = -b;
        }

        cout << a << "/" << b << endl;
    }
    else
    {
       printf("0/1\n");
    }

    return 0;
}
