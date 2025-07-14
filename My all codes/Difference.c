#include<stdio.h>
int main()
{
    int number_one,number_two,number_three,number_four,difference;
    scanf("%d %d %d %d",&number_one,&number_two,&number_three,&number_four);

    difference = ((number_one*number_two)-(number_three*number_four));

    printf("DIFERENCA = %d\n",difference);

    return 0;

}
