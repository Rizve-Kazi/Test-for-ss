#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int case_no = 1;

    while(n--)
    {
        int r;
        cin >> r;

        int arr[r];

        for(int i = 0; i < r; i++)
        {
            cin >> arr[i];
        }

        int total1 = 0;
        int total2 = 0;

        for(int i = 0; i < r; i++)
        {
            total1 = total1 + ((arr[i] / 30) + 1) * 10;
            total2 = total2 + ((arr[i] / 60) + 1) * 15;
        }

        cout << "Case " << case_no << ": ";
        if(total1 < total2)
        {
            cout << "Mile " << total1 << endl;
        }
        else if(total2 < total1)
        {
            cout << "Juice " << total2 << endl;
        }
        else
        {
            cout << "Mile Juice " << total1 << endl;
        }

        case_no++;
    }

    return 0;
}
