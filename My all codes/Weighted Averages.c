#include<stdio.h>
int main()
{
    double number_one,number_two,number_three,avarage;
    int num,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        scanf("%lf %lf %lf",&number_one,&number_two,&number_three);

        avarage = ((number_one*2+number_two*3+number_three*5)/10);


printf("%.1lf\n",avarage);

    }






}
