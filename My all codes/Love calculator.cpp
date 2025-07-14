 "#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, s2;

    while (getline(cin, s) && getline(cin, s2))
    {
        long long int sum = 0;
        long long int sum2 = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                sum += tolower(s[i]) - 'a' + 1;
            }
        }

        for (int i = 0; i < s2.size(); i++)
        {
            if (isalpha(s2[i]))
            {
                sum2 += tolower(s2[i]) - 'a' + 1;
            }
        }

        while (sum >= 10)
        {
            long long int r = 0;
            while (sum > 0)
            {
                r += sum % 10;
                sum /= 10;
            }
            sum = r;
        }

        while (sum2 >= 10)
        {
            long long int r = 0;
            while (sum2 > 0)
            {
                r += sum2 % 10;
                sum2 /= 10;
            }
            sum2 = r;
        }

        double ans;
        if (sum == 0 && sum2 == 0)
        {
            ans = 0.0;
        }
        else if (sum > sum2)
        {
            ans = ((double)sum2 / sum) * 100.0;
        }
        else
        {
            ans = ((double)sum / sum2) * 100.0;
        }

        printf("%.2lf %%\n", ans);
    }
}
