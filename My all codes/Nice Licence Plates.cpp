#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int a = 0;

        for (int i = 0; i < 3; i++)
        {
            a += (s[i] - 'A') * pow(26, 2 - i);
        }

        string c = s.substr(4, 4);
        int m = stoi(c);

        if (abs(m - a) <= 100)
        {
            cout << "nice" << endl;
        }
        else
        {
            cout << "not nice" << endl;
        }
    }

    return 0;
}
