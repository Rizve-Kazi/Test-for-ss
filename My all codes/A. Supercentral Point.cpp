#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t], arr2[t];

    for(int i = 0; i < t; i++)
    {
        cin >> arr[i] >> arr2[i];
    }

    int m = 0;

    for(int i = 0; i < t; i++)
    {
        int left = 0, right = 0, up = 0, down = 0;

        for(int j = 0; j < t; j++)
        {
            if(arr[j] < arr[i] && arr2[j] == arr2[i]) // left
            {
                left = 1;
            }
            if(arr[j] > arr[i] && arr2[j] == arr2[i]) // right
            {
                right = 1;
            }
            if(arr[j] == arr[i] && arr2[j] > arr2[i]) // up
            {
                up = 1;
            }
            if(arr[j] == arr[i] && arr2[j] < arr2[i]) // down
            {
                down = 1;
            }
        }

        if(left && right && up && down)
        {
            m++;
        }
    }

    cout << m << endl;
}
