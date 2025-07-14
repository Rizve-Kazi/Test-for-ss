#include<stdio.h>
int main()
{
    int test;
    int number;

    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&number);

        if(number%2==0)
        {
            printf("Sakurako\n");
        }
        else if(number%2!=0)
        {
            printf("Kosuke\n");
        }
    }
    return 0;
}
