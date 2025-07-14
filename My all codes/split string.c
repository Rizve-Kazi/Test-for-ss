#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[101]="Kazi Yeaj Morshed Rizve";
    char* piece=strtok(str," ");

    while(piece!=NULL)
    {
        printf("%s\n",piece);
        piece=strtok(NULL," ");
    }
}

