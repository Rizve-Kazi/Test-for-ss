#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;

    cout << "PERFECTION OUTPUT" << endl;

    while (cin >> n && n != 0)
    {
        int sum = 0;

        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        string type;
        if (sum == n)
            type = "PERFECT";
        else if (sum < n)
            type = "DEFICIENT";
        else
            type = "ABUNDANT";

        cout << setw(5) << n << "  " << type << endl;
    }

    cout << "END OF OUTPUT" << endl;

    return 0;
}
