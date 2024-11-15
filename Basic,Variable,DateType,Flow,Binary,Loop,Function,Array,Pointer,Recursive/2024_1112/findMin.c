#include<stdio.h>


int findMin(int num)
{
	int minSoFar;
	int userInput;

	printf("Enter a value: ");
	scanf("%d", &userInput);

	if (num > 1)
	{
		minSoFar = findMin(num-1);
		if (minSoFar < userInput)
			return minSoFar;
		else
			return userInput;
	}

	return userInput;
}

int main()
{
	int num;

	printf("Please enter the number of sequence: ");
	scanf("%d", &num);
	printf("The Min number in the sequence is %d\n", findMin(num));


	return 0;
}