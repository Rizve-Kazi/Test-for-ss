#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while(cin >> s && s != "0")
    {
        long long int decimal = 0;

        for(int i = 0; i < s.size(); i++)
        {
            int digit = s[i] - '0';
            int pos = s.size() - i;
            decimal = decimal + digit * (pow(2, pos) - 1);
        }

        cout << decimal << endl;
    }

    return 0;
}
