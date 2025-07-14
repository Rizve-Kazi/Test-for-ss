#include<stdio.h>
int main()
{
    int A[1000],i,range;
    int minimum = A[0];
    int position = -1;

    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        scanf("%d",&A[i]);
    }

    for(i=0; i<=range; i++)
    {
        if(minimum > A[i])
        {
            minimum = A[i];

            position = i-1;
        }

    }

    printf("Menor valor: %d\n",minimum);
    printf("Posicao: %d\n",position);

    return 0;

}
