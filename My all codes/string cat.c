#include<stdio.h>
int main()
{
    char s1[]={"My name is "};
    char s2[] = {"Rizve"};

    strcat(s1,s2);

    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
}
