#include<stdio.h>
#include<math.h>
int main()
{
    int test,number,calculation_one,calculation_two,rem,ans,final_ans,temp;
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
        scanf("%d",&number);
        calculation_one=((number*567)/9)+7492;
        calculation_two=((calculation_one*235)/47)-498;// Let,Calculation_two=613;

        temp=abs(calculation_two);

        rem = temp%10; // So, (613%10)=3
        ans=((temp-rem)/10); // So, 610/10=61
        final_ans=ans%10; // So, 61%10=1;


        printf("%d\n",final_ans);
    }
    return 0;
}
