#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        double r = double(z) / (x + y);

        double ans = r * (x + (x - y));

        printf("%.0lf\n", ans);
    }
    return 0;
}
