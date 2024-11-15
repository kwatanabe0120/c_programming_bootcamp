#include<stdio.h>


int evenOccurences()
{
	int userInput;
	printf("Please enter number: ");
	scanf("%d", &userInput);

	if (userInput == -1)
		return 0;
	if (userInput % 2 == 0)
		return 1 + evenOccurences();
	else
		return evenOccurences();
}

int sumOfEvenNumbers()
{
	int userInput;
	printf("Please enter number: ");
	scanf("%d", &userInput);

	if (userInput == -1)
		return 0;
	if (userInput % 2 == 0)
		return userInput + sumOfEvenNumbers();
	else
		return sumOfEvenNumbers();
}

int main()
{
	// printf("The occurences of even number is %d\n", evenOccurences());
	printf("The occurences of even number is %d\n", sumOfEvenNumbers());

	return 0;
}