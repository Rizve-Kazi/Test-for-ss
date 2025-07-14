#include<stdio.h>
int main()
{
    int number,ans_one,ans_two,ans_three;
    scanf("%d",&number);

    ans_one = (number*1)+1;
    ans_two = (number*2)+1;
    ans_three = (number*3)+1;

    if((ans_one%2==0) && (ans_one!=2))
    {
        printf("1\n");
    }

    else if(ans_two%2==0)
    {
        printf("2\n");
    }

     else if(ans_three%2==0) && ans_three!=3)
    {
        printf("3\n");/////////   ..........1
    }

    else if((ans_one%3==0) && ans_one!=2)
    {
        printf("1\n");
    }

    else if(ans_two%3==0) && ans_two!=3)
    {
        printf("2\n");
    }

     else if(ans_three%3==0) && ans_three!=3)
    {
        printf("3\n");// 22222
    }
}
