#include<stdio.h>
int main()
{
    int range;
    scanf("%d",&range);

    for(int i=1;i<=range;i++)
    {
        char string[100];
        scanf("%s",&string);

        int j=1,len=1;

        while(string[j]!='\0')
        {

            j++;
            len++;
        }
        if(len<=10)
        {
            printf("%s\n",string);
        }
        else if(len>10)
        {
            printf("%c%d%c\n",string[0],len-2,string[len-1]);
        }
    }
    return 0;
}
