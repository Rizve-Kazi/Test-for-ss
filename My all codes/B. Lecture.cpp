#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string str1[3001], str2[3001];

    for (int i = 0; i < m; i++)
    {
        cin >> str1[i] >> str2[i];
    }

    string word;

    for (int i = 0; i < n; i++)
    {
        cin >> word;

        for (int j = 0; j < m; j++)
        {
            if (word == str1[j] || word == str2[j])
            {

                if (str1[j].length() <= str2[j].length())
                    cout << str1[j] << " ";
                else
                    cout << str2[j] << " ";
                break;
            }
        }
    }

    cout << endl;
    return 0;
}
