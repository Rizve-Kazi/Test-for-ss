#include<stdio.h>
int main()
{
    double a,b,c,d,R1,R2;
    scanf("%lf %lf %lf",&a,&b,&c);
    d = sqrt(b*b-4*a*c);
    if(d<0)
        {printf("Impossivel calcular\n");}
    R1 = (-b+d)/(2*a);
    R2 = (-b-d)/(2*a);
    if(2*a!=0 && d>0)
    {printf("R1 = %.5lf\n",R1);
         printf("R2 = %.5lf\n",R2);}
else
   {printf("Impossivel calcular\n");}
return 0;

}
