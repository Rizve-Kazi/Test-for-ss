#include<stdio.h>
int main()
{
    char s1[15]= {"Bangladesh"};
    char s2[15] = {"India"};
    char temp[15];
    printf("Before swapping\n");
    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n\nAfter swapping\n");
    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
}
