#include<stdio.h>
int main()
{

    double weight1 =2,weight2=3,weight3 =5,number1,number2,number3,average;
    scanf("%lf\n %lf\n %lf",&number1,&number2,&number3);

    average = ((number1*weight1+number2*weight2+number3*weight3)/( weight1+weight2+weight3));

    printf("MEDIA = %.1lf\n",average);

   return 0;

}










