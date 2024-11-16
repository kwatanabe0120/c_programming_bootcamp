#include<stdio.h>
#include<string.h>

typedef struct employee
{
	char name[50];
	int age;
	float salary;
}Employee;

int main()
{
	Employee emp1;
	Employee emp2 = {"John", 30, 50000.0};

	emp1 = emp2;

	printf("Employee 1\n");
	printf("Name: %s\n", emp1.name);
	printf("Age: %d\n", emp1.age);
	printf("Salary: %.2f\n", emp1.salary);

	printf("\nEmployee 2\n");
	printf("Name: %s\n", emp2.name);
	printf("Age: %d\n", emp2.age);
	printf("Salary: %.2f\n", emp2.salary);

	strcmp(emp1.name, "Kody");
	emp1.age = 100;

	printf("\nAfter changing\n");
	printf("\nEmployee 1\n");
	printf("Name: %s\n", emp1.name);
	printf("Age: %d\n", emp1.age);
	printf("Salary: %.2f\n", emp1.salary);

	return 0;
}