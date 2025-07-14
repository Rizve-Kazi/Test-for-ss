#include<stdio.h>
int main()
{
    int range,result,a,b,c;
    scanf("%d",&range);

    for(int i=1; i<=range; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a>=b && a>=c) && b>=c)
        {
            result = (a-b) + (b-c);
            printf("%d\n",result);
        }

        else if((c>=a && c>=b) && b>=a)
        {
            result = (c-b) + (b-a);
            printf("%d\n",result);

        }

        else if((b>=a && b>=c) && c>=a)
        {
            result = (b-c) + (c-a);
            printf("%d\n",result);

        }

        else if((a>=b && a>=c) && c>=b)
        {
            result = (a-c) + (c-b);
            printf("%d\n",result);

        }
        else if((c>=a && c>=b) && a>=b)
        {
            result = (c-a) + (a-b);
            printf("%d\n",result);

        }

        else if((b>=a && b>=c) && a>=c)
        {
            result = (b-a) + (a-c);
            printf("%d\n",result);

        }
    }
    return 0;
}
