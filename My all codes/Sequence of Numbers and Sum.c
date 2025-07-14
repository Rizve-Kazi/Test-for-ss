#include<stdio.h>
int main()
{
    int number_one,number_two,i,sumOfNumbers=0;




    for(;;)

    {
        scanf("%d",&number_one);
       scanf("%d",&number_two);

        for(i=number_two; i<=number_one; i++)
        {

        if((number_one<!0 && number_one!=0) || (number_two<!0 && number_two!=0))

                {sumOfNumbers=sumOfNumbers+i;}

            if(number_one<=0 || number_two<=0)
                break;
        }

    }
//    printf("%d ",i);
//    printf("Sum =%d",sumOfNumbers);







}
