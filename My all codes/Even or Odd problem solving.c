#include<stdio.h>
int main()
{
    int i,num,number;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
scanf("%d",&number);

    {if(number>0 && number%2==0)
     {printf("EVEN POSITIVE\n");}

 else  if(number>0 && number%2!=0)
    {printf("ODD POSITIVE\n");}}

{
     if(number<0 && number%2==0)
    {printf("EVEN NEGTIVE\n");}

 else if(number<0 && number%2!=0)
    {printf("ODD NEGTIVE\n");}
}
 if(number==0)
{printf("NULL\n");}
}

return 0;
}
