#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter = ");
    scanf("%c",&ch);

    if(ch>='a'&& ch<='z'&& ch=='a,e,i,o,u')
        printf("Small letter");
        printf("Also vowel");

     if (ch>='A' && ch<='Z' && ch =='A,E,I,O,U')
        printf("Capital letter");
        printf("Also vowel");

    else
        printf("No letter");

    getch();








}
