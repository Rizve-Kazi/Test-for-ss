#include<stdio.h>
int main()
{
    int Arr[] = {10,20,30,40,50};
    display(Arr);
}
 void display( int n[])
 {
     int i;
     for(i=0;i<5;i++)
     {
         printf("%d\n",n[i]);
     }
 }
