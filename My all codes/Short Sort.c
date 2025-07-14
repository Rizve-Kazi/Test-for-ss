#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    scanf("%d",&test);
     char str[4];

    for(int i=0;i<test;i++)
    {

        scanf("%s",&str);

        //for(int j=0;j<4;j++)
        {
            int temp1=str[0];
            str[0]=str[1];
            str[1]=temp1;
            printf("Str1 = %s\n",str);

            int temp2=str[1];
            str[1]=str[2];
            str[2]=temp2;
            printf("Str2 = %s\n",str);

            int temp3=str[2];
            str[2]=str[3];
            str[3]=temp3;
            printf("Str3 = %s\n",str);

        }
    }
}
