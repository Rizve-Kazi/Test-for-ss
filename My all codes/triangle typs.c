#include<stdio.h>
int main()
{
    double a,b,c,perimetro,area;
    scanf("%lf %lf %lf",&a,&b,&c);

    if(b<a+c && c<b+a && a<b+c)
    {

         perimetro =(a+b+c);
    printf("Perimetro = %.1lf\n",perimetro);
    }

    else
    {
       area = ((a+b)*c)/2;
      printf("area = %.1lf\n",area);}

    return 0;






}
