#include <stdio.h>


union student
{
	int id;
	double gpa;
};

int main()
{
	union student s1;
	union student *ptr;

	s1.id = 5;
	printf("ID: %d\n", s1.id);

	ptr = &s1;
	ptr->id = 10;
	printf("ID: %d\n", s1.id);


	return 0;
}