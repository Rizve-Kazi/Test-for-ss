#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;

    ptr1 = (int * )malloc(5*sizeof(int));
    ptr2 = (int *)calloc(5,sizeof(int));

    if(ptr1==NULL || ptr2==NULL)
    {
        printf("Memory is not allocated\n");
    }

    else
    {
        printf("Memory allocation is successfully\n");

    }

    ptr2 = realloc(ptr2,50);
    printf("Memory reallocation is successful\n");
}
