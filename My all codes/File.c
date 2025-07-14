#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;
    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File doesn't exist\n");
    }

    else
    {
        printf("File is opened\n");

        printf("Enter the name = ");
        gets(name);

        printf("Enter the age = ");
        scanf("%d",&age);

        fputc(name,file);
    }
}
