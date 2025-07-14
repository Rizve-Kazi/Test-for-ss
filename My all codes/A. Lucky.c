#include<stdio.h>
int main()
{
    int range,number;
    int rem1,rem2,rem3,rem4,rem5,rem6,temp,tem,devide;
    scanf("%d",&range);

    for(int i=0; i<range; i++)
    {
        scanf("%d",&number);
        int sum_one=0,sum_two=0;

        temp=(number%1000);
        tem = (number-temp)/1000;

        rem1 = temp%10;  // PART ONE;
        rem2 =((temp-rem1)/10)%10;
        rem3 =temp/100;

        sum_one = rem1+rem2+rem3;

        rem4 = tem%10;  // PART TWO;
        rem5 =((tem-rem4)/10)%10;
        rem6 =tem/100;

        sum_two = rem4+rem5+rem6;

        if(sum_one==sum_two)
        {
            printf("YES\n");
        }

        else if(sum_one!=sum_two)
        {
            printf("NO\n");
        }
    }
    return 0;
}
