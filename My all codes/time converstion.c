#include<stdio.h>
int main()
{
    int hour,min,seconds;
    scanf("%d",&seconds);

    hour = seconds/3600;
    seconds=seconds%3600;
    min=seconds/60;
    seconds=seconds%60;

    printf("%d:%d:%d\n",hour,min,seconds);
    return 0;
}
