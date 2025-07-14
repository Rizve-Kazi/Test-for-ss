#include<stdio.h>
int main()
{
    FILE *file;
    char fname[30];
    char lname[30];
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
        fprintf("%s %s %d\n",fname,lname,age);
    }
}
