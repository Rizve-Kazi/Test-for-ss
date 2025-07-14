#include<stdio.h>
int main()
{
    int i,number;
    int count =1;
    scanf("%d",&number);

    if(i<=1)
    {
        count =1;
    }
    for(i=2;i<=number;i++){
        if(number%i==0)
        {
            count =0;
            break;
        }

    }

    if(count==1)
        printf("%d Prime number",number);
    else
        printf("%d Not a prime number",number);
    getch();


}












































