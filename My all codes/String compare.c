#include<stdio.h>
int main()
{
    char s1[40];
    char s2[40];

    printf("Enter the first string = ");
    gets(s1);

    printf("Enter the second string = ");
    gets(s2);

    int d = strcmp(s1,s2);

    if(d==0)
    {
        printf("String are equal\n");
    }

    else
    {
        printf("String are not equal\n");
    }

    return 0;

}
