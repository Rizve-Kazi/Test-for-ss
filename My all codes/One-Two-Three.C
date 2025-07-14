#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int time;
    scanf("%d",&time);
   while(time--)
    {
        scanf("%s",&string);

        if((string[0]=='t' && string[1]=='w') || (string[0]=='t' && string[2]=='o') || (string[1]=='w' && string[2]=='o'))
        {
            printf("2\n");
        }
        else if((string[0]=='o' && string[1]=='n') || (string[0]=='o' && string[2]=='e') || (string[1]=='n' && string[2]=='e'))
        {
            printf("1\n");
        }
        else if(strlen(string)>3)
        {
            printf("3\n");
        }
    }

    return 0;
}
