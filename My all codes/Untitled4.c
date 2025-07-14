#include<stdio.h>
int main()
{
    int i,number;
    int count=1,total=0;
   for(number=1;number<=100;number++){
        {
            count=1;
        }
    if(number<=1)
    {
        count=0;
    }
    else{
    for(i=2;i<(number);i++)
    {
        if((number%i==0))
            {count=0;
        break;}

    }
    }
    if(count==1)
    printf("%d ",number);
total++;


   }

   printf("\n total= %d\n",total);


    getch();


}
