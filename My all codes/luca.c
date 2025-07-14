#include<stdio.h>
int main()
{
    int number,frist=2,second=1,lucas_series,count=3;
    printf("Enter the range = ");
    scanf("%d",&number);

    printf("%d ",frist);
    printf("%d ",second);

    while(count<number)
    {

        lucas_series = frist + second;
        frist = second;
        second = lucas_series;


    {printf("%d ",lucas_series);
    count++;}
    }
    return 0;
}
