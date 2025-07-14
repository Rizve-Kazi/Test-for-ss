#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;

    while(cin >> s >> s1)
    {
        // Exit condition
        if(s == "0" && s1 == "0")
        {
            break;
        }

        reverse(s.begin(), s.end());
        reverse(s1.begin(), s1.end());

        int carry = 0, carryCount = 0;
        int i = 0;

        while(i < s.length() || i < s1.length())
        {
            int a = (i < s.length()) ? s[i] - '0' : 0;
            int b = (i < s1.length()) ? s1[i] - '0' : 0;

            int sum = a + b + carry;

            if(sum >= 10)
            {
                carry = 1;
                carryCount++;
            }
            else
            {
                carry = 0;
            }

            i++;
        }

        if(carryCount == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(carryCount == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << carryCount << " carry operations." << endl;
        }
    }
}
