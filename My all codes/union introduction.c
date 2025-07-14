#include<stdio.h>
union test
{
    int x,y;
};

int main()
{
    union test t1;
    t1.x = 20;
    printf("The result of x = %d\n",t1.x);
    printf("The result of y = %d\n",t1.y);

    t1.y = 30;
    printf("The result of x = %d\n",t1.x);
    printf("The result of y = %d\n",t1.y);

}
