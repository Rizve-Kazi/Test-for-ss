#include<stdio.h>
int main()
{
    char country[]={"BAnGLADeSh"};
    int i,length;
    length =10;

    for(i=0;i<length;i++)
    {
        if(country[i]>=65 && country[i]<=90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("Lowercase = %s\n",country);
}
