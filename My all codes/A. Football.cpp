#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    char str1[11], str2[11];
    int count1 = 0, count2 = 0;

    cin >> len;
    scanf("%s", str1);
    count1++;

    for (int i = 1; i < len; i++)
    {
        char temp[11];
        scanf("%s", temp);

        if (strcmp(str1, temp) == 0)
        {
            count1++;
        }
        else
        {
            if (count2 == 0)
            {
                strcpy(str2, temp);
            }
            count2++;
        }
    }


    if (count1 > count2)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    return 0;
}
