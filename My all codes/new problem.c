#include<stdio.h>
int main()
{
    int total_amount,product_quantity,i,j,total_expense = 0,product_price,product,due,need;
    printf("Total amount  = ");
    scanf("%d",&total_amount);


    printf("\nProduct quantity = ");
    scanf("%d",&product_quantity);

    printf("\n");

    for(i=1; i<=product_quantity; i++)
    {
        printf("Product %d price = ",i);
        scanf("%d",&product_price);

        total_expense = total_expense + product_price;


    }

    due = total_amount - total_expense ;

    printf("\n");

    if(due>=0)
    {
        printf("Yes.");
    }

    else
    {
        need = total_expense - total_amount;
        printf("\nNeed = %d\n",need);
    }



}
