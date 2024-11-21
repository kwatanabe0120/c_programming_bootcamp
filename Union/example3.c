#include<stdio.h>


typedef union stduent
{
	int id;
	double gpa;
}Student;

int main()
{
	Student stduentArray[5];

	for(int i = 0; i < 5; i++)
	{
		printf("Enter ID: ");
		scanf("%d", &stduentArray[i].id);
	}

	for (int i = 0; i < 5; i++)
	{
		printf("ID: %d\n", stduentArray[i].id);
	}

	return 0;
}