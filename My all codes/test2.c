#include<stdio.h>
int main()
{
    int i,startNumber,finalNumber,number,totalPrimeNumbers=0,sumOfPrimeNumbers=0,count=0;

    printf("Start number =");
    scanf("%d",&startNumber);

    printf("Final number =");
    scanf("%d",&finalNumber);

    for(number = startNumber;number<finalNumber;number++)
        count=0;
    {
       if(number<=0)
            count=0;


    for(i=2;i<=number;i++)
    {
        if(number%i==0)
           {
            count=1;
    break;
           }

    }
        if(count==0)
            printf("%d ");
        totalPrimeNumbers++;
        sumOfPrimeNumbers = sumOfPrimeNumbers+number;

    }


    printf("\nTotal prime numbers = %d\n",totalPrimeNumbers);
    printf("\nSum of prime numbers = %d\n",sumOfPrimeNumbers);

    getch();

}









