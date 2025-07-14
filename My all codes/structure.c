#include<stdio.h>
struct Person
{
    int age;
    float salary;
};
  int main()
  {
      struct Person person1 = {30,50.20};

       printf("\nFirst person age = %d\n",person1.age);
      printf("First person salary = %.2f\n",person1.salary );
  }
