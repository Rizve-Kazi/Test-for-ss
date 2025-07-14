#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    while(cin >> a >> b >> c >> d)
    {
        int arr[d];
        int r;
        vector<int> arr1;

        for(int i = 0; i < c; i++)
        {
            cin >> r;

            for(int j = 0; j < d; j++)
            {
                cin >> arr[j];

                if(arr[j] >= a)
                {
                    int total_cost = r * a;
                    if(total_cost <= b)
                    {
                        arr1.push_back(total_cost);
                    }
                }
            }
        }

        if(arr1.empty())
        {
            cout << "stay home\n";
        }
        else
        {
            int min_cost = *min_element(arr1.begin(), arr1.end());
            cout << min_cost << endl;
        }
    }

    return 0;
}
