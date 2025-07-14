#include<stdio.h>
struct Person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct Person person[4];
    int i;
    for(i=0; i<4; i++)
    {
        printf("Enter the information of person %d\n",i+1);
        printf("Enter name = ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter age = ");
        scanf("%d",&person[i].age);
        printf("Enter salary = ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }

    printf("\n");

    for(i=0; i<4; i++)
    {
        printf("The information of person %d\n",i+1);
        printf("Name = %s\n",person[i].name);
        printf("Age = %d\n",person[i].age);
        printf("Salary = %0.3f\n",person[i].salary);
        printf("\n");
    }
}
