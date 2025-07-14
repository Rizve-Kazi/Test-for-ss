#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    char str2[] = "hello";
    int len = strlen(str);

    int j = 0;


    for (int i = 0; i < len; i++)
    {
        if (str[i] == str2[j])
        {
            j++;
            if (j == 5)
            {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}
