#include<stdio.h>
int main()
{
    char *str[5]={"Bangla,English,Maths,Physics,Social Science"};
    int i;

    for(i=0;str[i];i++)
    {
        printf("String[%d]=%s\n",i,str[i]);
    }
}
