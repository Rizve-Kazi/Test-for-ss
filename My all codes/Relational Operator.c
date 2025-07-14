#include<stdio.h>
int main()
{
    int solders_one,solders_two;
    while(scanf("%d %d",&solders_one,&solders_two)!=EOF)
    {
        if(solders_two>solders_one)
        {
            printf("%d\n",solders_two-solders_one);
        }
        else
        {
            printf("%d\n",solders_one-solders_two);
        }
    }
    return 0;
}
