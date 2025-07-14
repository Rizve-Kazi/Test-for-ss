#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int count = 0;
        double avg = (double)sum / n;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg)
            {
                count++;
            }
        }

        double ans = (count * 100.0) / n;
        printf("%.3lf%%\n", ans);
    }

    return 0;
}
