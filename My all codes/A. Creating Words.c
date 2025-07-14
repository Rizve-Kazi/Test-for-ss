#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    char str1[4],str2[4];
    scanf("%d",&test);

    for(int i=0;i<test;i++)
    {
        scanf("%s %s",&str1,&str2);

        int temp=str1[0];
        str1[0]=str2[0];
        str2[0]=temp;

        printf("%s %s\n",str1,str2);
    }
}
