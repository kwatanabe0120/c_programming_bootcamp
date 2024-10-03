#include <stdio.h>


int main ()
{
	int grade1;
	int grade2;
	int grade3;
	double result;

	printf("Input your grade1:\n");
	scanf("%d",&grade1);
	printf("Input your grade2:\n");
	scanf("%d",&grade2);
	printf("Input your grade3:\n");
	scanf("%d",&grade3);

	result = ((double)grade1 + grade2 + grade3) / 3;

	printf("Average grande is:%lf", result);

	return 0;
}