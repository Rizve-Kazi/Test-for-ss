#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a%2==0 && c>0 && b>c && d>a && (c+d>a+b))
        {printf("Valores aceitos\n");}
      else
        {printf("Valores nao aceitos\n");}
      return 0;
}
