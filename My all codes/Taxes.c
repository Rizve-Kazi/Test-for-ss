#include<stdio.h>
int main()
{
    double salary,taxes;
    scanf("%lf",&salary);

    if(salary>=0.00 && salary<=2000.00)
    {
        printf("Isento\n");

    }

    else if(salary>=2000.01 && salary<=3000.00)
    {
        taxes = ((salary-2000.00)*8)/100;
        printf("R$ %.2lf\n",taxes);
    }

    else if(salary>=3000.01 && salary<=4500.00)
    {
        taxes = ((salary-3000.00)*18)/100;
        printf("R$ %.2lf\n",taxes+80);
    }

    else if(salary>=4500.01)
    {
        taxes = ((salary-4500.00)*28)/100;
        printf("R$ %.2lf\n",taxes+80+270);
    }

    return 0;
}
