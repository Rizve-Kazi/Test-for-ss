#include<stdio.h>
int main()

{

  int x = 20; //x =21
  int y = x++; //y =21
  printf("%d\n",x);
  printf("%d\n",y);

   x = 20; //x =21
   y = ++ x; //y =20
  printf("%d\n",x);
  printf("%d\n",y);


   x = 20; // x = 19
   y = x--; //y=20
  printf("%d\n",x);
  printf("%d\n",y);

   x = 20; //x =19
   y = --x; //y =19
  printf("%d\n",x);
  printf("%d\n",y);

  getch();

















}
