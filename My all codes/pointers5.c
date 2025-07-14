#include<stdio.h>
int main()
{
    int x = 100;
    char ch = 'a';

    void *ptr;

    ptr = &x;
    printf("The value of x = %d\n",*(int*)ptr);

    ptr = &ch;
    printf("The charecter = %c\n",*(char*)ptr);
}
