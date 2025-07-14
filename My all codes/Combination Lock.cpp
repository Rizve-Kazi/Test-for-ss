#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;

    while(cin >> a >> b >> c >> d)
    {
        if(a == 0 && b == 0 && c == 0 && d == 0)
            break;

        int ans = 0;

        ans += 720;

        if(a >= b)
            ans += (a - b) * 9;
        else
            ans += (a + 40 - b) * 9;

        ans += 360;

        if(c >= b)
            ans += (c - b) * 9;
        else
            ans += (c + 40 - b) * 9;

        if(c >= d)
            ans += (c - d) * 9;
        else
            ans += (c + 40 - d) * 9;

        cout << ans << endl;
    }

    return 0;
}
