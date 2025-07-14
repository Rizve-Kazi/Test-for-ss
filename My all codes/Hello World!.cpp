#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,n=0;

    while (cin >> a)
    {
        n++;

        if (a < 0) {
            break;
        }

        int sum = 1;
        int m = 0;

        while (sum < a)
        {
            sum += sum;
            m++;
        }

        cout<<"Case "<<n<<": ";

        cout << m << endl;
    }

    return 0;
}
