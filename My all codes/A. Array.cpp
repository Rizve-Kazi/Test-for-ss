#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int a = 0, b = 0, c = 0;
    int m = 0, p = 0, r = 0;

    int arr1[n], arr2[n], arr3[n];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            a++;
            arr1[m++] = arr[i];
        }
        else if (arr[i] > 0)
        {
            b++;
            arr2[p++] = arr[i];
        }
        else
        {
            c++;
            arr3[r++] = arr[i];
        }
    }

    if (a % 2 != 0)
    {
        cout << "1 " << arr1[0] << endl;

        cout << (a - 1) + b << " ";
        for (int i = 1; i < m; i++)
        {
            cout << arr1[i] << " ";
        }
        for (int i = 0; i < p; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;

        cout << c << " ";
        for (int i = 0; i < r; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;
    }
    else if (a % 2 == 0)
    {
        cout << "1 " << arr1[0] << endl;

        cout << (a - 2) + b << " ";
        for (int i = 2; i < m; i++)
        {
            cout << arr1[i] << " ";
        }
        for (int i = 0; i < p; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << endl;

        cout << c+1 << " " << arr1[1] << " ";
        for (int i = 0; i < r; i++)
        {
            cout << arr3[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
