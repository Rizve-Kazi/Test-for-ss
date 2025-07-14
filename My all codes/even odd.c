#include<stdio.h>
int main()
{
    int i,number,num,count=0;
    scanf("%d",&num);

 for( i=1;i<=num;i++){
            count=0;
     scanf("%d",&number);
                 for(i=2;i<=number;i++)
        {

        if(number%i==0)
            count=1;
        break;
        }
    }

    if(count=0)
        {printf("%d prime",number);}
   else
         {printf("%d not prime",number);}
     return 0;
    }





