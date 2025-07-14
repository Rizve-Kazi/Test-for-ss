#include<stdio.h>
int main()
{
    int hasmot_soilders,hasmot_anty_soilders,soilder_difference;
    while(scanf("%d %d",&hasmot_soilders,&hasmot_anty_soilders)!=EOF)
    {
        soilder_difference = hasmot_anty_soilders - hasmot_soilders;
        printf("%d\n",soilder_difference);
    }
    return 0;
}
