#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        double d, v, u;
        cin >> d >> v >> u;

        if (u == 0 || u <= v)
        {
            printf("Case %d: can't determine\n", i);
            continue;
        }

        double t_short = d / sqrt(u * u - v * v);
        double t_fast = d / u;

        double diff = t_short - t_fast;

        printf("Case %d: %.3lf\n", i, diff);
    }

    return 0;
}
