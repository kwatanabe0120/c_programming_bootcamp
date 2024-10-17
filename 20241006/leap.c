#include <stdio.h>

int main ()
{
	int year;
	printf("Enter the year to check: ");
	scanf("%d", &year);

	// if (year % 4 == 0)
	// {	
	// 	if (year % 100 == 0)
	// 	{
	// 		if(year % 400 == 0)
	// 			printf("Leap year!");
	// 		else
	// 			printf("Not leap year!");
	// 	}
	// 	else
	// 		printf("Leap year!");
	// }
	// else
	// 	printf("Not leap year!");


	if (year % 400 == 0)
		printf("Leap year");
	else if (year % 100 == 0)
		printf("Not leap year");
	else if (year % 4 == 0)
		printf("Leap year");
	else 
		printf("Not leap year");
	return 0;
}