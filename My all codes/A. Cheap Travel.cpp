#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int compare = b / m;

    if (compare >= a)
    {
        cout << n * a << endl;
    }
    else
    {
        int ans = (n / m);
        int result = n - (m * ans);

        int final_result = (ans * b) + (result * a);

        if ((ans + 1) * b >= final_result)
        {
            cout << final_result << endl;
        }
        else
        {
            cout << (ans + 1) * b << endl;
        }
    }

    return 0;
}
