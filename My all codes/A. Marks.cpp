#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char str[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> str[i][j];
        }
    }

    char arr[m];
    int a = 0;

    for (int i = 0; i < m; i++)
    {
        char maxi = str[0][i];

        for (int j = 0; j < n; j++)
        {
            if (str[j][i] > maxi)
            {
                maxi = str[j][i];
            }
        }
        arr[a++] = maxi;
    }

    int d = 0;

    for (int i = 0; i < n; i++)
    {
        int  c=0;

        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == arr[j])
            {
                c++;
            }

            if (c == m)
            {
                d++;
            }
        }
    }

    cout << d << endl;

    return 0;
}
