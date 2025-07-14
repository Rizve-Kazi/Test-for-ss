#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int res1 = a + (b * c);
    int res2 = a * (b + c);
    int res3 = a * b * c;
    int res4=(a+b+c);
    int res5=(a+b)*c;

    int arr[6] = {res1, res2, res3, res4,res5};


    int max_value = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    printf("%d\n", max_value);

    return 0;
}
