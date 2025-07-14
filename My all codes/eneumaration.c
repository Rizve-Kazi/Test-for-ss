#include<stdio.h>
enum days_of_weeks
{
    SUN,MON,TUE,WED,THU,FRI,SAT
};
int main()
{
    enum days_of_weeks day1,day2;
    day1 =  FRI;
    printf("DAY ONE = %d\n",day1);
}


