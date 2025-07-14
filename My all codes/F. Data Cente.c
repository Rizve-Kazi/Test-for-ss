#include<stdio.h>
int main()
{
    int number;
    int ans;
    scanf("%d",&number);

    int result = sqrt(number);

    if((result*result)==number)
    {
       ans = result*4;
       printf("%d\n",ans);
    }

    else
    {
        ans = 1+number+1+number;
        printf("%d\n",ans);
    }
    return 0;
}
