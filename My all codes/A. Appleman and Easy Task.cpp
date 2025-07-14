#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;

    char str[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> str[i][j];
        }
    }

    int a = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == 'o')
            {
                int sum = i + j;
                if (sum % 2 == 0)
                {
                    a++;
                }
            }
        }
    }

    cout << "A = " << a << endl;
    if (a == m)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}
