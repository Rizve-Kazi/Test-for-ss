#include<stdio.h>
int main()
{
    struct Person
    {
        int age;
        float salary;
    };

    struct Person person1,person2;

    person1.age = 25;
    person1.salary = 1550.50;
    person2.age = 30;
    person2.salary = 4500.00;

    printf("The frist person age = %d\n",person1.age);
    printf("The frist person salary = %.2lf\n",person1.salary);
    printf("The second person age = %d\n",person2.age);
    printf("The second person age = %.2lf\n",person2.salary);
}
