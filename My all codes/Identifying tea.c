#include<stdio.h>
#include<math.h>
int main()
{
    int a,tea,count=0;
    scanf("%d",&tea);

    for(int i=1;i<=5;i++)
    {
        scanf("%d",&a);

        if(a==tea)
        {
            count++;
        }
    }

    printf("%d\n",count);
    return 0;
}
