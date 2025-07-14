#include<stdio.h>
int main()
{
    int A[10],i,temp,number;

    for(i=1; i<=6; i++)
    {
        scanf("%d",&A[i]);
    }
    temp = A[1];
    A[1]=A[3];
    A[3]=temp;

    temp = A[4];
    A[4]=A[5];
    A[5]=temp;

    temp = A[2];
    A[2]=A[6];
    A[6]=temp;


    for(i=1; i<=6; i++)
    {
        printf("A[%d] = %d\n",i,A[i]);
    }



//    for(i=4; i<=6; i++)
//    {
//        printf("A[%d] = %d\n",i,A[i]);
//    }



}
