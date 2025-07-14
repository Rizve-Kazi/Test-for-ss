#include<stdio.h>
int main()
{
    int range;
    long long int friends,a,b,c;

    scanf("%d",&range);

    for(int i=1; i<=range; i++)
    {
        scanf("%lld",&friends);

        if(friends>0 && friends<=6)
        {
            printf("15\n");
        }
        else if(friends>=7 && friends<=8)
        {
            printf("20\n");
        }
        if(friends==9)
        {
            printf("25\n");
        }
        else if(friends>=10)
        {
            if(friends%10==0)
            {
                long long time=friends/10;
                printf("%lld\n",time*25);
            }
            else if(friends%10!=0)
            {
                if(friends%10==1 || friends%10==2)
                {
                    long long time=friends/10;
                    printf("%lld\n",((time-1)*25)+30);
                }
                else if(friends%10==3 || friends%10==4)
                {
                    long long time=friends/10;
                    printf("%lld\n",((time-1)*25)+35);
                }
                else if(friends%10==5 || friends%10==6)
                {
                    long long time=friends/10;
                    printf("%lld\n",((time-1)*25)+40);
                }
                else if(friends%10==7 || friends%10==8)
                {
                    long long time=friends/10;
                    printf("%lld\n",((time-1)*25)+45);
                }
                else if(friends%10==9)
                {
                    long long time=friends/10;
                    printf("%lld\n",((time)*25)+25);
                }
            }
        }

    }
    return 0;
}

