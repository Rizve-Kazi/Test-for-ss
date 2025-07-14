#include<stdio.h>
int main()
{
    int number_one,number_two,range,i;
    scanf("%d",&range);

    char ch;

    for(i=1;i<=range;i++)
    {
        int sum = 0;
        scanf("%d %c %d",&number_one,&ch,&number_two);
        sum = sum + number_one + number_two;
        printf("%d\n",sum);
    }

    return 0;
}
