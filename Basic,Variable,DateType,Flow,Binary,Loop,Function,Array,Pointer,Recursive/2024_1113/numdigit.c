#include <stdio.h>

// 123 3
int isOccurencesEven(int num, int target)
{
	// int resultSofar;
	if(num < 10)
	{
		if(num == target)
			return 0;
		else
			return 1;
	}

	if (num%10 != target)
		return isOccurencesEven(num/10, target);
	else
		return !isOccurencesEven(num/10, target);

	// resultSofar = isOccurencesEven(num/10, target);


	// if(num % 10 == target && resultSofar == 0)
	// 	return 1;
	// else if (num % 10 == target && resultSofar == 1)
	// 	return 0;
	// else
	// 	return resultSofar; 

	// if (num % 10 == target)
	// 	return resultSofar == 0 ? 1 : 0;
	// else
	// 	return resultSofar;
}

int main()
{
	int num, target;
	printf("Please enter the num: ");
	scanf("%d", &num);
	printf("Please enter the target num: ");
	scanf("%d", &target);

	printf("The result is %d", isOccurencesEven(num,target));


	return 0;
}