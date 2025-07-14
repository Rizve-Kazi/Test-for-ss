#include<stdio.h>
int main()
{
  double number_one,number_two,number_three;
  double triangle_area,circle_area,trapezium_area,square_area,rectangular_area;
  scanf("%lf  %lf  %lf",&number_one,&number_two,&number_three);




    triangle_area = (0.5*number_one*number_three);
      printf("TRIANGULO: %.3lf\n",triangle_area);

    circle_area = (3.14159*number_three*number_three);
    printf("CIRCULO: %.3lf\n",circle_area);

    trapezium_area = (((number_one+number_two)/2)*number_three);
    printf("TRAPEZIO: %.3lf\n",trapezium_area);

    square_area = (number_two*number_two);
    printf("QUADRADO: %.3lf\n",square_area);

    rectangular_area =(number_one*number_two);
     printf("RETANGULO: %.3lf\n",rectangular_area);



    return 0;
}

