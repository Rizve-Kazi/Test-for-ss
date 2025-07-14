#include<stdio.h>
int main()
{
    double number_one,number_two,division;
    int i,range;
    scanf("%d",&range);

    for(i=1; i<=range; i++)
    {
        scanf("%lf",&number_one);
        scanf("%lf",&number_two);

        if(number_two==0 && (number_one>0 || number_one<0))
        {
            printf("divisao impossivel\n");
        }

        else if((number_one>=0 || number_one<=0) && (number_two>0 || number_two<0))
        {
            division = number_one/number_two;
            printf("%.1lf\n",division);
        }
    }
    return 0;

}
