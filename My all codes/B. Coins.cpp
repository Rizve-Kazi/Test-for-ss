#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while(n != 0)
    {
        cout << n << " ";

        if(n == 1)
        {
            break;
        }

        for(int i = n - 1; i >= 1; i--)
        {
            if(n % i == 0)
            {
                n = i;
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
