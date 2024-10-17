#include <stdio.h>


int main ()
{
	int grade;
	int total = 0;
	int count = 0;

	while (1)
	{
		printf("Enter your grade: ");
		scanf("%d", &grade);

		if (grade == -1)
			break;
		
		total += grade; 
		count++;
	}
	if(count > 0)
		printf("Your average grade is %.2f", (float)total / count);
	else 
		printf("Please enter at least one value");
	return 0;
}