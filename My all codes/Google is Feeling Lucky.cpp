#include <bits/stdc++.h>
using namespace std;

int main()
{
    int range;
    cin >> range;

    for (int t = 0; t < range; t++)
    {
        char str[10][101];
        int arr[10];

        for (int i = 0; i < 10; i++)
        {
            cin >> str[i] >> arr[i];
        }

        int maxi = arr[0];
        for (int i = 1; i < 10; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
            }
        }

        int m = 0;
        char str2[10][101];

        for (int i = 0; i < 10; i++)
        {
            if (arr[i] == maxi)
            {
                strcpy(str2[m], str[i]);
                m++;
            }
        }

        cout << "Case #" << t + 1 << ":" << endl;

        for (int i = 0; i < m; i++)
        {
            cout << str2[i] << endl;
        }
    }

    return 0;
}
