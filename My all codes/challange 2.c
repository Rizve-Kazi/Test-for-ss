#include<stdio.h>
int main()
{
    int tanvir_point,toasin_point,total_Tanvir_Point = 0,total_Toasin_Point = 0,i,round;

    printf("Enter the round = ");
    scanf("%d",&round);

    printf("\n");

    for(i=1; i<=round; i++)
    {

        for(i=1; i<=round; i++)
        {
            printf("Tanvir point %d round = ",i);
            scanf("%d",&tanvir_point);

            printf("Toasin point %d round = ",i);
            scanf("%d",&toasin_point);

            printf("\n");

            total_Tanvir_Point = total_Tanvir_Point + tanvir_point;
            total_Toasin_Point =  total_Toasin_Point + toasin_point;
        }


    }


    if(total_Tanvir_Point>total_Toasin_Point)
    {
        printf("\n\nTanvir win the game.\n");

    }



    else
    {
        printf("\n\nToasin win the game.\n");

    }

    printf("\n\n");


    printf("Total Tanvir point = %d\n",total_Tanvir_Point);
    printf("Total Toasin point = %d\n",total_Toasin_Point);

    return 0;

}
