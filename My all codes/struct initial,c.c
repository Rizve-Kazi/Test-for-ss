#include<stdio.h>
struct Person
{
    int age;
    float salary;
};
  int main()
  {
      int person1_age,person2_age;
      float person1_salary,person2_salary;
      printf("Enter the information of first person = \n");

      printf("Enter age = ");
      scanf("%d",&person1_age);
      printf("Enter salary = ");
      scanf("%f",&person1_salary);

      printf("\nEnter the information of second person = \n");

      printf("Enter age = ");
      scanf("%d",&person2_age);
      printf("Enter salary = ");
      scanf("%f",&person2_salary);

      printf("\nFirst person age = %d\n",person1_age);
      printf("First person salary = %.2f\n",person1_salary );
      printf("\nSecond person age = %d\n",person2_age);
      printf("Second person salary = %.2f\n",person2_salary);

  }
