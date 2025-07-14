#include<stdio.h>
#include<string.h>
int main()
{
    int test,number;
    int rem,devide;
    scanf("%d",&test);

    while(test--)
    {
        scanf("%d",&number);

        devide=number/3;
        rem=number-(devide*3);

        if(number==rem)
        {
            printf("%c%c%c\n",devide+'a'-1,devide+'a'-1,devide+'a'-1);
        }
        else if(number!=rem)
        {
            printf("%c%c%c\n",devide+'a'-1,devide+'a'-1,devide+'a'-1+rem);
        }
    }
}
