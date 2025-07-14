#include<stdio.h>
int main()
{
    int number_one,number_two,i,sum1=0,sum2=0,sum=0;
    scanf("%d",&number_one);{
    if(number_one<0){
        for(i=number_one;i<1;++i)
    {
        if(i%2==0)
        sum1=sum1+1;

        else if(i%2!=0)
        sum1=sum1+1;

    }
    }

    else if(number_one>0)
        for(i=1;i<=number_one;i++)
    {

         if(i%2==0)
        sum1=sum1+1;

        else if(i%2!=0)
        sum1=sum1+1;

    }
    }



  scanf("%d",&number_two);{
    if(number_two<0){
        for(i=number_two;i<1;++i)
    {
        if(i%2==0)
        sum2=sum2+1;

        else if(i%2!=0)
        sum2=sum2+1;

    }
    }

    else if(number_two>0)
        for(i=1;i<=number_two;i++)
    {

         if(i%2==0)
        sum2=sum2+1;

        else if(i%2!=0)
        sum2=sum2+1;

    }
    }


   sum = sum+1;
    printf("%d\n",sum);




}
