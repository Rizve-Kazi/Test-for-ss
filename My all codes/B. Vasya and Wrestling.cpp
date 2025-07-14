#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long s1 = 0, s2 = 0;

    for(int i = 0; i < n; i++)
    {
        if(v[i] >= 0)
        {
            s1 += v[i];
        }
        else
        {
            s2 += -v[i];
        }
    }

    if(s1 > s2)
    {
        cout << "first" << endl;
    }
    else if(s2 > s1)
    {
        cout << "second" << endl;
    }
    else
    {
        vector<int> a, b;

        for(int i = 0; i < n; i++)
        {
            if(v[i] >= 0)
            {
                a.push_back(v[i]);
            }
            else
            {
                b.push_back(-v[i]);
            }
        }

        for(int i = 0; i < min(a.size(), b.size()); i++)
        {
            if(a[i] > b[i])
            {
                cout << "first" << endl;
                return 0;
            }
            else if(b[i] > a[i])
            {
                cout << "second" << endl;
                return 0;
            }
        }

        if(a.size() > b.size())
        {
            cout << "first" << endl;
        }
        else if(b.size() > a.size())
        {
            cout << "second" << endl;
        }
        else
        {
            if(v[n - 1] >= 0)
            {
                cout << "first" << endl;
            }
            else
            {
                cout << "second" << endl;
            }
        }
    }

    return 0;
}
