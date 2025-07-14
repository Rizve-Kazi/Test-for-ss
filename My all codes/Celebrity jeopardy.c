
#include<stdio.h>
#include<math.h>
int main()
{
    int test;
    int number,temp,len=0;
    int rem,result_one,result_two,ans_one,ans_two,final_ans1,final_ans2;
    scanf("%d",&test);

    for(int i=1;i<=test;i++)
    {
        scanf("%d",&number);
        temp=number;

        for(int k=0;k<temp!=0;k++)
        {
            rem=temp%10;
            temp=temp/10;
            len++;
        }

        result_one=pow(10,len-3);
        ans_one=number-(number%result_one);
        final_ans1=ans_one/result_one;


        result_two=pow(10,len);
        ans_two=number-(number%result_two);
        final_ans2=ans_two/result_two;


        if((number%100==4) || (number%100==1) || (number%100==78))
        {
            printf("+\n");
        }
        else if(number%100==35)
        {
            printf("\n");
        }
        else if((number%10==4) && final_ans2==9)
        {
            printf("*\n");
        }
        else if(final_ans1==190)
        {
            printf("?\n");
        }
    }
    return 0;
}
