#include <stdio.h>


// num = 3
//  1, 3, 2

int findMax(int num)
{
	int userInput;
	int maxSoFar;

	printf("Enter the value: ");
	scanf("%d", &userInput);

	if (num > 1)
	{
		maxSoFar = findMax(num-1);
		if (maxSoFar > userInput)
			return maxSoFar;
		else
			return userInput;
	}
	return userInput;
}
int main()
{
	int num;
	printf("Please enter the number of seqeunce: ");
	scanf("%d", &num);

	printf("The mex number in the sequence is %d\n", findMax(num));

	return 0;
}