#include<stdio.h>
int main()
{
    int A[5] = {10,20,30,40,50};
    int *p;
    int *q;

    p = &A[0];
    q = &A[1];

    printf("Q-P = %d\n",q-p);

}
