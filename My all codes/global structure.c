#include<stdio.h>
 struct Person
 {
     int age;
     float salary;

 };


int main()
{
    struct Person person1,person2;
    person1.age = 25;
    person1.salary =  1231.325;
    person2.age = 26;
    person2.salary = 15264.45251;

    printf("The person1 age = %d\n",person1.age);
    printf("The person1 salary = %.2f\n",person1.salary);
    printf("The person2 age = %d\n",person2.age);
    printf("The person2 salary = %.2f\n",person2.salary);

}
