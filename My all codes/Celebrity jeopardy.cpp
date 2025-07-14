#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    string str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        str[i] = to_string(arr[i]);
    }

    int arr2[n];
    int m = 0;

    for (int i = 0; i < n; i++)
    {
        int len = str[i].length();

        if (len == 1)
        {
            arr2[m++] = arr[i];
        }
        else
        {
            for (int j = 0; j < len; j++)
            {
                if (str[i][j] == '0')
                {
                    arr2[m++] = arr[i];
                    break;
                }
            }
        }
    }

    if (m == 0)
    {
        cout << "0\n";
    }
    else if (m == 1)
    {
        cout << "1\n" << arr2[0] << endl;
    }
    else if (m % 2 == 0)
    {
        cout << m << endl;
        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << m - 1 << endl;
        for (int i = 0; i < m - 1; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
