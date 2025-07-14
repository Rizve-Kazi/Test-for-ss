#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char str[101];
    int counts = 0;
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> str;

        if (strcmp(str, "WINE") == 0 ||
                strcmp(str, "ABSINTH") == 0 ||
                strcmp(str, "BEER") == 0 ||
                strcmp(str, "BRANDY") == 0 ||
                strcmp(str, "CHAMPAGNE") == 0 ||
                strcmp(str, "GIN") == 0 ||
                strcmp(str, "RUM") == 0 ||
                strcmp(str, "SAKE") == 0 ||
                strcmp(str, "TEQUILA") == 0 ||
                strcmp(str, "VODKA") == 0 ||
                strcmp(str, "WHISKEY") == 0)
        {
            counts++;
        }

        else if (isdigit(str[0]))
        {
            int num = stoi(str);
            if (num >= 0 && num <= 17)
            {
                c++;
            }
        }
    }

    cout << counts + c << endl;
    return 0;
}
