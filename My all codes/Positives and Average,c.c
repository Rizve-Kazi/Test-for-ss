#include<stdio.h>
int main()
{
    double number,sumOfPositivenumber=0,avarage,sumOfNegNumber=0;
    int i,positiveNumber=0;

    for(i=1;i<=6;i++)
    {
        scanf("%lf",&number);
    if(number>=0)
            {positiveNumber=positiveNumber+1;
            sumOfPositivenumber=number+sumOfPositivenumber;}

            else if(number<0)
                {sumOfNegNumber=sumOfNegNumber+number;}

    }
  printf("%d valores positivos\n",positiveNumber);
    avarage = (sumOfPositivenumber/positiveNumber);
    printf("%.1lf\n",avarage);


   return 0;
}
