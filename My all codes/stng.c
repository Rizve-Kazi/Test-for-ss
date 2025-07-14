#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter your string = ");
    gets(str);

    int length=strlen(str);
    int mid=length/2;

    char first_half[100],second_half[100];

    strncpy(first_half,str,mid);
    first_half[mid]='\0';

    strcpy(second_half,str+mid);

    printf("The first half = %s\n",first_half);
    printf("The second half = %s\n",second_half);
}
