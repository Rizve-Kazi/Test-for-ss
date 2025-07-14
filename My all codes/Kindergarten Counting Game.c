#include <stdio.h>
#include <string.h>

int main()
{
    int test;
    scanf("%d", &test);

    while (test--)
    {
        char str[81];
        scanf("%s", str);

        int score = 0;
        int current_score = 0;
        int len=strlen(str);

        for (int i = 0; i < len; i++)
        {
            if (str[i] == 'O')
            {
                current_score++;
                score = score + current_score;
            }
//            else
//            {
//                current_score = 0;
//            }
        }

        printf("%d\n", score);
    }

    return 0;
}
