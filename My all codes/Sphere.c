#include<stdio.h>
int main()
{

    double radious,area;
    scanf("%lf",&radious);

    area = ((4*3.14159*radious*radious*radious)/3);

    printf("VOLUME = %.3lf", area);

    return 0;
}
