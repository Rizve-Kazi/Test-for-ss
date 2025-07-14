#include<stdio.h>
int main()
{
    int i,number[20];
    int searing_number;
    int found =0;
    printf("Enter the searching number = ");
    scanf("%d",&searing_number);

    printf("Enther the five value of this array =  ");

    for(i=1; i<=5; i++)
    {
        scanf("%d",&number[i]);

        if(searing_number==number[i])
        {
            found = i;
            break;
        }

    }

    if(found==0)
    {
        printf("\n%d Not found\n",searing_number);
    }

    else
    {
        printf("\n%d Found\n",searing_number);
    }


    return 0;

}
