#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int sub1 = abs(a - c);
    int sub2 = abs(b - d);

    if (sub1 == 0 && sub2 > 0)
    {
        cout << a + sub2 << " " << b << " " << c + sub2 << " " << d << endl;
    }
    else if (sub1 > 0 && sub2 == 0)
    {
        cout << a << " " << b + sub1 << " " << c << " " << d + sub1 << endl;
    }
    else if (sub1 == sub2)
    {
        cout << a << " " << d << " " << c << " " << b << endl;
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}
