#include <stdio.h>

int main ()
{
	int grade;
	float result = 0;
	int gradeTotal= 0;
	int counter = 0;

	while (grade != -1)
	{
		printf("Enter your grade: ");
		scanf("%d", &grade);
		if (grade != -1)
		{
			gradeTotal += grade;
			counter++;
		}
	}
	if(counter != 0)
	{
		result = (float)gradeTotal / counter;
		printf("Your average grade is %.2f", result);
	}
	else
	{
		printf("Please put at least one grade");
	}

	return 0;
}