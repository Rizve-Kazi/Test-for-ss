#include<stdio.h>
int main()
{
    int number,frist=0,second=1,fibn,count=0;
    printf("Enter the range = ");
    scanf("%d",&number);

    while(count<=number)
    {
        if(count<=1)
        {
            fibn=count;
        }
        else
        {
        fibn = frist+second;
        frist = second;
        second = fibn;
        }

        printf("%d ",fibn);
        count++;
    }
}
