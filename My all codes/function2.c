#include<stdio.h>
int main()
{
    int range,number,result=1;
    printf("Enter the number = ");
    scanf("%d %d",&number,&range);
    for(int i=1; i<=range; i++)
    {
        result = (result*number);

    }
    printf("The result = %d\n",result);
}

