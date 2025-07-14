#include<stdio.h>
int main()
{
    int valocity,time,displacement,i;

    while(scanf("%d %d", &valocity, &time) != EOF)
    {

        // End Of Line
        displacement = (valocity*2*time);
        printf("%d\n",displacement);
    }


    return 0;
}
