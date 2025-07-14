#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;

    while (cin >> n && n != 0)
    {
        string s = "";
        int count = 0;

        while (n != 0)
        {
            int rem = n % 2;
            n = n / 2;

            if (rem == 1)
                count++;

            s.push_back(rem + '0');
        }

        reverse(s.begin(), s.end());
        printf("The parity of %s is %d (mod 2).\n", s.c_str(), count);
    }

    return 0;
}
