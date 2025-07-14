#include<stdio.h>
int main()
{
    int number,n,in=0,out=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {

        scanf("%d",&number);
        if(number>=10 && number<=20)
            in++;
        else
            out++;

    }

   printf("%d in\n",in,number);
   printf("%d out\n",out,number);

   return 0;

}
