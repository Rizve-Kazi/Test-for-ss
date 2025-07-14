#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int count1 = 0;
        int count2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count1++;
            }
            else if (a[i] == 1)
            {
                count2++;
            }
        }

        if (count1 >= count2)
        {
            count1 = count1 - 1;
        }
        else
        {
            count2 = count2 - 1;
        }

        if ((n - 1) % 2 == 0 && count1 == count2)
        {
            printf("NO\n");
        }
        else if ((n - 1) % 2 == 1 && count1 - count2 == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}
