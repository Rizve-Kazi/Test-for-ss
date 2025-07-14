#include<stdio.h>
int main()
{
    int  player_one,player_two,player_three,i,range,count=0;
    scanf("%d",&range);

    for(i=1;i<=range;i++)
    {
        scanf("%d %d %d",&player_one,&player_two,&player_three);

        if((player_one==1 && player_two==1 && player_three==1) || (player_one==1 && player_two==1 && player_three==0) || (player_one==1 && player_three==1 && player_two==0) || (player_two==1 && player_three==1 && player_one==0))
        {
            count++;
        }

    }
    printf("Count= %d\n",count);
}
