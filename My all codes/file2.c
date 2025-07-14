#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
    file = fopen("test.test","r");

    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }

    else
    {
        printf("File is opened\n");

        while(!feof(file));
        {
             fgets(ch,40,file);
            printf("%s\n",ch);
        }
        fclose(file);
    }
}
