#include <stdio.h>
int main()
{
    int range;
    scanf("%d", &range);
    int arr[101];

    for (int i = 0; i < range; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count1 = 0, m = 0;
    int count2 = 0, n = 0;

    for (int i = 0; i < range; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count1++;
            m = i + 1;
        }
        else
        {
            count2++;
            n = i + 1;
        }
    }

    if (count1 == 1)
    {
        printf("%d\n", m);
    }
    else if (count2 == 1)
    {
        printf("%d\n", n);
    }

    return 0;
}
