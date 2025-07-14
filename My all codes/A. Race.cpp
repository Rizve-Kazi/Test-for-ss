#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        int r1 = abs(a - x);
        int r2 = abs(a - y);

        int flag = 0;

        for(int i = 1; i <= 100; i++)
        {
            if(i == a)
                continue;

            if(abs(i - x) < r1 && abs(i - y) < r2)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << "NO\n";
    }
}
