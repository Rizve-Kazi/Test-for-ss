#include<stdio.h>
#include<math.h>
int main()
{

  double a,b,c,d,x1,x2;
  printf("a b c = ");
  scanf("%lf\n %lf\n %lf\n",&a,&b,&c);

  d = sqrt(b*b - 4*a*c);

  x1 = (-b+d)/(2*a);
  x2 = (-b+d)/(2*a);

  printf("x1 = %lf\n",x1);
  printf("x2 = %lf\n",x2);

  getch();













}
