#include<stdio.h>
int main()
{
    FILE *file;
    FILE *copy;
    char str[50];

    file = fopen("test.txt","r");
    copy = fopen("close.file","w");

    if(file==NULL || copy==NULL)
    {
        printf("Error file\n");
    }

    else
    {
        printf("File is opened\n");

        while(!feof(file))
        {
            fgets(str,40,file);
            fputs(str,copy);
        }
        fclose(file);
        fclose(copy);
    }
    return 0;
}
