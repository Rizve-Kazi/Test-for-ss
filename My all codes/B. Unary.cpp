#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string str;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '>')
        {
            str += "1000";
        }
        else if (s[i] == '<')
        {
            str += "1001";
        }
        else if (s[i] == '+')
        {
            str += "1010";
        }
        else if (s[i] == '-')
        {
            str += "1011";
        }
        else if (s[i] == '.')
        {
            str += "1100";
        }
        else if (s[i] == ',')
        {
            str += "1101";
        }
        else if (s[i] == '[')
        {
            str += "1110";
        }
        else if (s[i] == ']')
        {
            str += "1111";
        }
    }

    const int MOD = 1000003;
    long long decimal = 0;

    for (int i = 0; i < str.size(); i++)
    {
        decimal = (decimal * 2 + (str[i] - '0')) % MOD;
    }

    cout << decimal << endl;

    return 0;
}
