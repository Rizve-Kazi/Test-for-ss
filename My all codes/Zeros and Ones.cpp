#include <stdio.h>
#include <string.h>

int main()
{
    int case_num = 0;
    char str[1000001];

    while (scanf("%s", str) == 1)
    {
        int n;
        scanf("%d", &n);

        case_num++;
        printf("Case %d:\n", case_num);

        for (int i = 0; i < n; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);

            int start, end;
            if (a < b)
            {
                start = a;
                end = b;
            }
            else
            {
                start = b;
                end = a;
            }

            char first = str[start];
            int same = 1;

            for (int j = start + 1; j <= end; j++)
            {
                if (str[j] != first)
                {
                    same = 0;
                    break;
                }
            }

            if (same == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }

        int temp = getchar();
        if (temp == EOF)
        {
            break;
        }
    }

    return 0;
}
