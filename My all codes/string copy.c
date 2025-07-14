#include<stdio.h>
int main()
{
    char sourse[]="C programming.";
    char target[30];

    strcpy(target,sourse);

    printf("Sourse string = %s\n",sourse);
    printf("Target string = %s\n",target);

}
