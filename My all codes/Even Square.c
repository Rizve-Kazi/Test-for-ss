#include<stdio.h>
#include<math.h>
int main()
{

    int number,i,result;
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {

        result = pow(i,2);
        if(i%2==0)
printf("%d^2 = %d\n",i,result);

    }


return 0;

}
