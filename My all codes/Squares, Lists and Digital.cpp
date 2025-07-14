#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 9; i <= 15; i++)
    {
        int result = i * i;
        int sum = 0;
        int rem = 0;

        while (result != 0)
        {
            rem = result % 10;
            result = result / 10;
            sum = sum + rem;
        }

        int n = sqrt(sum);

        if ((n * n) == sum)
        {
            cout << i << " " << i * i << endl;
        }
    }

    return 0;
}
