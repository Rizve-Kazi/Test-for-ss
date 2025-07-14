#include<stdio.h>
int main()
{
    int input,ans;
    char str_one[10]= {"of week"};
    char str_two[10]= {"of month"};
    char str[10];

    scanf("%d",&input);
    gets(str);

    int d = strcmp(str_one,str);
    int a = strcmp(str_two,str);

    if(d==0)
    {
        if(input==5 || input==6)
        {
            ans = (365)/7;
            printf("%d",ans+1);
        }

        else if((input>=0 && input<=6) && (input!=5 || input!=6))
        {
            printf("%d\n",ans);
        }
    }

    else
    {
        if(a==0)
        {
            if(input>=1 && input<=30)
            {
                printf("11\n");
            }
            else if(input==29)
            {
                printf("1\n");
            }
            else if(input==31)
            {
                printf("4\n");
            }
        }
    }

    return 0;
}
