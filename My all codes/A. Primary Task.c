#include<stdio.h>
#include<math.h>
int main()
{
    int test,number,rem,tem;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&number);
        tem=number;
        int i=0;
        int n=0;
        int m=0;


        while(tem!=0)
        {
            rem=tem%10;
            tem=tem/10;
            i++;
        }

        int r=pow(10,i-2);

        n=number%r;
        m=(number-n)/r;

        double final_ans=pow(m,n);

//       printf("Ans = %lf\n",final_ans);

        if(m!=10)
        {
            printf("NO\n");
        }
        else if(final_ans>=number)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}
