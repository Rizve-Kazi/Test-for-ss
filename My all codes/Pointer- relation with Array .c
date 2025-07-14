#include<stdio.h>
int main()
{
    int *p = (int*)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    free(p);

    int *q = (int*)malloc(2*sizeof(int));
    q[0]=100;
    q[1]=200;
    printf("%d %d\n",p[0],p[1]);
}
