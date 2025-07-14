#include<stdio.h>
union test1
{
    int x,y;
};

union test2
{
    int x;
    float f;
    double d;
};

union test3
{
    int x;
    double d;
    char c;
};

struct test4
{
    int x;
    double d;
    float f;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Length of test case 1 = %d\n",sizeof(t1));
    printf("Length of test case 2 = %d\n",sizeof(t2));
    printf("Length of test case 3 = %d\n",sizeof(t3));
    printf("Length of test case 4 = %d\n",sizeof(t4));
}
