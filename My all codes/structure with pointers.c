#include<stdio.h>
struct employee
{
    char name[40];
    int age;
    float salary;
};
struct employee* getDetails();

int main()
{
    struct employee *e = getDetails();
    printf("Name = %s\n",e->name);
    printf("Age = %d\n",e->age);
    printf("Salary = %.3f$\n",e->salary);

    free(e);

    return 0;
}

struct employee* getDetails()
{
    struct employee *ptr = malloc(sizeof(struct employee));
    printf("Enter the details :-\n");
    scanf("%s %d %f",&ptr->name,&ptr->age,&ptr->salary);

    return ptr;
};
