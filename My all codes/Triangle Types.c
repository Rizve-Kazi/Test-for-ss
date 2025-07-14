#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);

{
                     if(a>=b+c || b>=a+c || c>=a+b){
             printf("NAO FORMA TRIANGULO\n");}

           else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
             printf("TRIANGULO RETANGULO\n");}


         else if((a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)  && (a==b || a==c || b==c)){
             printf("TRIANGULO OBTUSANGULO\n");
              printf("TRIANGULO ISOSCELES\n");}




       else if( (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b) && (a*a<b*b+c*c || c*c<a*a+b*b  || b*b<a*a+c*c)){
             printf("TRIANGULO OBTUSANGULO\n");
               printf("TRIANGULO ACUTANGULO\n");}


        else if((a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b) && (a==b && b==c && c==a)){
             printf("TRIANGULO OBTUSANGULO\n");
          printf("TRIANGULO EQUILATERO\n");}


  else  if((a*a<b*b+c*c || c*c<a*a+b*b  || b*b<a*a+c*c)  && (a==b && a==c && b==c)){
                 printf("TRIANGULO ACUTANGULO\n");
                  printf("TRIANGULO EQUILATERO\n");}


 else  if((a*a<b*b+c*c || c*c<a*a+b*b  || b*b<a*a+c*c)  && (a==b || a==c || b==c)){
                 printf("TRIANGULO ACUTANGULO\n");
                  printf("TRIANGULO ISOSCELES\n");}



     else  if((a==b && b==c && c==a)  && (a==b || a==c || b==c) ){
                     printf("TRIANGULO EQUILATERO\n");
                        printf("TRIANGULO ISOSCELES\n");}


else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
    {printf("TRIANGULO OBTUSANGULO\n");}


     else  if(a*a<b*b+c*c || c*c<a*a+b*b  || b*b<a*a+c*c)
        {printf("TRIANGULO ACUTANGULO\n");}


}
    return 0;

}
