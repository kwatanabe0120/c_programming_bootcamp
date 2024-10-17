#include<stdio.h>


int main()
{
	int grade;

	//  -----0      50      100-----

	do
	{
		printf("Please enter your number FROM 0 TO 100: ");
		scanf("%d", &grade);
	} while (grade > 100 || grade < 0);

	printf("Thanks! You put %d which is a legit number\n", grade);
	
	return 0;
}