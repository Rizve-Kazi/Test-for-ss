#include<stdio.h>
int main()
{
    int range;
    char string[3][3];


    scanf("%d",&range);
    for(int i=0; i<range; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                scanf("%s",&string[j][k]);

            }
        }
    }
}
