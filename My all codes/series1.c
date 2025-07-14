#include<stdio.h>
int main()
{

    int number,i,num,count=0;
    scanf("%d",&num);


   for(i=1; i<=num; i++)
    {
        scanf("%d",&number);
for(i=2; i<number; i++)
       {

           if(number%i==0){
            break;}
           // printf("%d prime\n",number);}

        if(number%i!=0 && number<=1){
        break;}
//printf("%d not prime\n",number);}

       }

       {printf("%d prime\n",number);}
       {printf("%d not prime\n",number);}


    }


}
