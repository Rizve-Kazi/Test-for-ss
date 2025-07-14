#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, v;
    cin >> t >> v;
    int n = 0;
    int arr2[1000];
    int m = 0;

    for (int i = 0; i < t; i++)
    {
        int len;
        cin >> len;
        int arr[len];
        bool canBuy = false;

        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
            if (v > arr[j])
            {
                canBuy = true;
            }
        }

        if (canBuy)
        {
            arr2[m++] = i + 1;
            n++;
        }
    }

    if (n != 0)
    {
        cout << n << endl;
        for (int i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
