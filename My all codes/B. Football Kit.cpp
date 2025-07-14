#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> home(n), away(n);

    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> away[i];
    }

    for (int i = 0; i < n; i++)
    {
        int homeKit = n - 1;
        int awayKit = n - 1;

        for (int j = 0; j < n; j++)
        {
            if (i == j) continue;


            if (away[i] == home[j])
            {
                homeKit++;
                awayKit--;
            }
        }

        cout << homeKit << " " << awayKit << endl;
    }

    return 0;
}
