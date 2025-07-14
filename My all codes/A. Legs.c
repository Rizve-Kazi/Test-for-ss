#include<stdio.h>
int main()
{
    int range,leg,result;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        scanf("%d",&leg);

         if(leg%2==0 && leg%4==0)
        {
            result = leg/4;
            printf("%d\n",result);
        }

       else if(leg%2==0)
        {
           result = leg/2;
           printf("%d\n",result);
        }

        else if(leg%4==0)
        {
            result = leg/4;
            printf("%d\n",result);
        }
    }
    return 0;
}
