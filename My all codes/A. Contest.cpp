#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int misha_points = max((3 * a) / 10, a - (a / 250) * c);
    int vasya_points = max((3 * b) / 10, b - (b / 250) * d);

    if (misha_points > vasya_points)
    {
        cout << "Misha\n";
    }
    else if (vasya_points > misha_points)
    {
        cout << "Vasya\n";
    }
    else
    {
        cout << "Tie\n";
    }

    return 0;
}
