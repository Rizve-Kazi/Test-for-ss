#include<stdio.h>
int main()
{
    int range,num_one,num_two,num_three,num_four;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d %d %d %d",&num_one,&num_two,&num_three,&num_four);

        if(num_one<num_two && num_three<num_four && num_one<num_three && num_two<num_four)
        {
            printf("YES\n");
        }

         else if(num_three<num_four && num_one<num_two && num_three<num_one && num_four<num_two)
        {
            printf("YES\n");
        }

        else if(num_four<num_two && num_three<num_one && num_four<num_three && num_two<num_one)
        {
            printf("YES\n");
        }

         else if(num_two<num_one && num_four<num_three && num_two<num_four && num_one<num_three)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
