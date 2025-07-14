#include<stdio.h>
struct book
{
    char name[25];
    int price;
};
int main()
{
    typedef struct book Book;
    Book b = {"Amar jibonkotha",550};
    printf("The name of my book = %s\n",b.name);
    printf("Price = %d\n",b.price);
}
