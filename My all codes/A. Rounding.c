#include<stdio.h>
int main()
{
    int number,rem,ans;
    scanf("%d",&number);

    rem = number%10;

    if(rem<=5)
    {
       ans = number-rem;
    }

    else if(rem>5)
    {
        ans = number+(10-rem);
    }

    else if(rem==0)
    {
        ans = number;
    }
    printf("%d\n",ans);
}
