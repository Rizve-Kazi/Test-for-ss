#include<stdio.h>
int main()
{
    double score_First_person,score_Second_person;
    while(1)
    {
        scanf("%lf %lf",&score_First_person,&score_Second_person);

        if((score_First_person>=10.00  || score_First_person<0.00) && (score_Second_person>=10.00 || score_Second_person<0.00))
        {
            break;
        }
        if((score_First_person>=10.00 || score_First_person<0.00) &&(score_Second_person<10.00 || score_Second_person>0.00) && (score_First_person>=10.00 || score_First_person<0.00))
        {
            break;
        }
    }
}
