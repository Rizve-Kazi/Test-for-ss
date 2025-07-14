#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int n;
    cin >> n;
    cin.ignore(); // আগের newline ক্লিয়ার করা

    int m = 0;

    char s1[10] = {"abc"};
    char s2[10] = {"def"};
    char s3[10] = {"ghi"};
    char s4[10] = {"jkl"};
    char s5[10] = {"mno"};
    char s6[10] = {"pqrs"};
    char s7[10] = {"tuv"};
    char s8[10] = {"wxyz"};

    while (n--)
    {
        getline(cin, str); // gets() এর বদলে getline()
        m++;

        int s = 0;
        int len = str.length();

        for (int i = 0; i < len; i++)
        {
            if (str[i] == ' ')
            {
                s = s + 1;
            }

            for (int j = 0; s1[j] != '\0'; j++)
            {
                if (str[i] == s1[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s2[j] != '\0'; j++)
            {
                if (str[i] == s2[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s3[j] != '\0'; j++)
            {
                if (str[i] == s3[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s4[j] != '\0'; j++)
            {
                if (str[i] == s4[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s5[j] != '\0'; j++)
            {
                if (str[i] == s5[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s6[j] != '\0'; j++)
            {
                if (str[i] == s6[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s7[j] != '\0'; j++)
            {
                if (str[i] == s7[j])
                {
                    s = s + j + 1;
                }
            }

            for (int j = 0; s8[j] != '\0'; j++)
            {
                if (str[i] == s8[j])
                {
                    s = s + j + 1;
                }
            }
        }

        printf("Case #%d: %d\n", m, s);
    }

    return 0;
}
