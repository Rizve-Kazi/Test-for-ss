#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = n;
    int m=0;

    while(n >= 3)
    {
        int exchange = n / 3;
        total += exchange;
        n = exchange + (n % 3);

        if(n<3)
        {
            m=exchange;
        }
    }

    cout << total+m<< endl;
    return 0;
}
