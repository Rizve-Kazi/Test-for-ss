#include<stdio.h>
int display( char nic[i])
{
    int i;
    printf("My full name is :- ");
    for(i=0;i<24;i++)
    {
        printf("%s\n",nic[i]);
    }
}
int main()
{
    char name[100] = {"Kazi Yeaj Morshed Rizve"};
    int length = sizeof(name)/sizeof(name[0]);
    display(name);
}
