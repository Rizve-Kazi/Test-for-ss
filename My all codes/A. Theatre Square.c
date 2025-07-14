#include<stdio.h>
int main()
{
    int m,n,a,requared,area_one,area_two,result;
    scanf("%d %d %d",&m,&n,&a);

    area_one = m*n;
    area_two = a*a;

    result = (area_one/area_two);
    requared = area_one-(area_two*result);

    printf("%d\n",requared);

    return 0;
}
