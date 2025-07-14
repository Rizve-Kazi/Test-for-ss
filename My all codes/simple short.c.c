#include<stdio.h>
int main()
{
    int number_one,number_two,number_three;

    scanf("%d",&number_one);
    scanf("%d",&number_two);
    scanf("%d",&number_three);

    if(number_one<number_two<number_three)
    {
        printf("%d\n",number_one);
        printf("%d\n",number_two);
        printf("%d\n",number_three);
    }

    else if(number_one<number_three<number_two)
    {

        printf("%d\n",number_one);
         printf("%d\n",number_three);
         printf("%d\n",number_two);
    }
   else  if(number_three<number_two<number_one)
    {

        printf("%d\n",number_three);
          printf("%d\n",number_two);
          printf("%d\n",number_one);
    }

    else if(number_two<number_three<number_one)
    {

        printf("%d\n",number_two);
         printf("%d\n",number_three);
           printf("%d\n",number_one);

    }
   else  if(number_three<number_one<number_two)
    {

        printf("%d\n",number_three);
         printf("%d\n",number_one);
          printf("%d\n",number_two);
    }
   else  if(number_two<number_one<number_three)
    {

        printf("%d\n",number_two);
          printf("%d\n",number_one);
            printf("%d\n",number_three);

    }


}
