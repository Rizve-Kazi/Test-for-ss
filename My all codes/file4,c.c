#include<stdio.h>
int main()
{
    FILE *file;
    char fname[20];
    char lname[20];
    int age;

    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }

    else
    {
        printf("File is opened\n");

        fscanf(file,"%s %s %d",&fname,&lname,&age);
        printf("%s %s %d",fname,lname,age);
    }
    fclose(file);
}
