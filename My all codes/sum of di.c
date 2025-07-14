#include<stdio.h>
#include<math.h>
int main()
{
    long long int number;


    for(int i=1; i<=200000000;i++)
    {
        scanf("%d\n",&number);

        int tem1,rem1,sum1=0;
        int tem2,rem2,sum2=0;
        int tem3,rem3,sum3=0;

         tem1=number;


        while(tem1!=0)
        {
            rem1=tem1%10;
            sum1=sum1+rem1;
            tem1=tem1/10;
        }
        if(sum1<10)
        {
            printf("%d\n",sum1);

        }
        else if(sum1>=10)
        {
            tem2=sum1;

            while(tem2!=0)
            {
                rem2=tem2%10;
                sum2=sum2+rem2;
                tem2=tem2/10;
            }

            if(sum2<10)
            {
                printf("%d\n",sum2);

            }
            else if(sum2>=10)
            {
                tem3=sum2;

                while(tem3!=0)
                {
                    rem3=tem3%10;
                    sum3=sum3+rem3;
                    tem3=tem3/10;
                }
                printf("%d\n",sum3);
            }

        }
         if(tem1==0)
        {
            break;
        }
    }
    return 0;

}
