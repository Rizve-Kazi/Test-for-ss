#include<stdio.h>
int main()
{
    char s1[]="Rizve";
    int i=0,len=0;
    printf("Length = ");
    while(s1[i]!=0)
    {

        i++;
        len++;
    }
    printf("%d\n",len);
}
