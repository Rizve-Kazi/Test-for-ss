#include<stdio.h>4
int main()
{
    long long int test;
    int number,temp1,sum1=0,rem1;
    int temp2,sum2=0,rem2;
    int temp3,sum3=0,rem3;
    int temp4,sum4=0,rem4;

    scanf("%lld",&test);

    for(int i=1; i<=test; i++)
    {
        scanf("%d",&number);

        temp1=number;

        while(temp1!=0)
        {
            rem1=temp1%10;
            sum1=sum1+rem1;
            temp1=temp1/10;
        }
        {
            if(sum1<=9)
            {
                printf("%d\n",sum1);
            }
            else
            {
                sum2=temp2;
                while(temp2!=0)
                {
                    rem2=temp2%10;
                    sum2=sum2+rem2;
                    temp2=temp2/10;
                }
                {
                    if(sum2<=9)
                    {
                        printf("%d\n",sum2);
                    }
                    else
                    {
                        temp3=sum3;
                        while(temp3!=0)
                        {
                            rem3=temp3%10;
                            sum3=sum3+rem3;
                            temp3=temp3/10;
                        }
                        if(sum3<=9)
                        {
                            printf("%d\n",sum3);
                        }
                        else
                        {
                            temp4=sum4;

                            while(temp4!=0)
                            {
                                rem4=temp4%10;
                                sum4=sum4+rem4;
                                temp4=temp4/10;
                            }
                            printf("%d\n",sum4);
                        }
                    }

                }
            }
        }
    }
    return 0;
}
