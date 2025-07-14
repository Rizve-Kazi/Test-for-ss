#include<stdio.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};

 void display(struct Person p)
 {
     printf("Here the information of first person :-\n");
     printf("\nNAME : %s\n",p.name);
     printf("AGE = %d\n",p.age);
     printf("SALARY = %.3f\n",p.salary);
 }

 int main()
 {
     struct Person person1;
     strcpy(person1.name,"Yeaj Morshed");
     person1.age = 30;
     person1.salary = 4550.250;
     display(person1);
 }
