#include<stdio.h>
int main()
{

    double totalPrice,code,quantity;

    scanf("%lf",&code);
    scanf("%lf",&quantity);


{
    if(code==1)
        {totalPrice = (quantity*4.00);
    printf("Total: R$ %.2lf",totalPrice);}

 else if(code==2)
       {
           totalPrice = (quantity*4.50);
    printf("Total: R$ %.2lf",totalPrice);}

else if(code==3)
        {totalPrice = (quantity*5.00);
    printf("Total: R$ %.2lf",totalPrice);}

    else if(code==4)
        {totalPrice = (quantity*2.00);
    printf("Total: R$ %.2lf",totalPrice);}

    else if(code==5)
       {totalPrice = (quantity*1.50);
    printf("Total: R$ %.2lf",totalPrice);}

}

return 0;
}
