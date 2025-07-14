#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    if(num1<num2 && num2%num1!=0)
        printf("Nao sao Multiplos\n",num1,num2);
else
    printf("Sao Multiplos\n",num1,num2);
return 0;
}
