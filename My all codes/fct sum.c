#include<stdio.h>
int main()
{
    int i,sum,fact1=1,number1,fact2=1,number2;

 scanf("%d",&number1);
 for(i=1;i<=6;i++){
 for(i=1;i<=number1;i++){
            fact1=fact1*i;
    }
    }


 scanf("%d",&number2);
    for(i=1;i<=6;i++){
    for(i=1;i<=number2;i++){
            fact2=fact2*i;
    }
    }
    sum = fact1+fact2;
    printf("%d\n",sum);

    getch();
    }






