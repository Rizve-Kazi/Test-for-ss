#include<stdio.h>
int main()
{
    int i,number,num;
      scanf("%d",&num);
    for(i=1;i<=num; i++){

         scanf("%d",&number);

        if(number%2==0 && number>0)
            {printf("EVEN POSITIVE\n");}

     else if(number%2==0 && number<0)
        {printf("EVEN NEGATIVE\n");}

      else if(number%2==0 && number<0)
        {printf("ODD POSITIVE\n");}

       else  if(number%2!=0 && number<0)
{printf("ODD NEGATIVE\n");}

      else if(number==0)
        {printf("NULL\n");}

       }


return 0;}


