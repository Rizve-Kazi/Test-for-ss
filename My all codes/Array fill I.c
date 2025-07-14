#include<stdio.h>
int main()
{
    int i=0,N[10],frist_number;
    scanf("%d",&frist_number);
    int j = frist_number;


    while(i<10 && j<=100000)
    {
        printf("N[%d] = %d\n",i,j);
        i++;
        j=j*2;
    }

    return 0;

}

