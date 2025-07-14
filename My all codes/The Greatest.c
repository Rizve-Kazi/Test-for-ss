#include<stdio.h>
int main()
{
    int number_one,number_two,number_three,answer,final_answer;
    scanf("%d %d %d",&number_one,&number_two,&number_three);
    if(number_one>=number_two && number_one>=number_three)
    {
        printf("%d eh o maior\n",number_one);
    }
    else if(number_two>=number_one && number_two>=number_three)
    {
        printf("%d eh o maior\n",number_two);
    }

    else if(number_three>=number_one && number_three>=number_two)
    {
        printf("%d eh o maior\n",number_three);
    }


    return 0;

}
