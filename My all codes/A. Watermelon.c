#include<stdio.h>
int main()
{
    int watermelon_weight;
    scanf("%d",&watermelon_weight);

    if(watermelon_weight%2==0)
    {
        printf("YES\n");
    }

    else if(watermelon_weight%2!=0)
    {
        printf("NO\n");
    }

}
