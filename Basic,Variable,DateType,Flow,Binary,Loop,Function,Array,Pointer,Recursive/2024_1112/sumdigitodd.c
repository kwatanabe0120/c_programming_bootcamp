#include<stdio.h>

// 156 ->12 return 0 even
		// return 1 odd

// 156
// 156 - 15 - 1

int digitsSumOdd(int n)
{
	int resultSoFar;
	if (n < 10)
	{
		// even 0
		if (n%2==0)
			return 0;
		else
		// odd 1
			return 1;
	}

	resultSoFar = digitsSumOdd(n/10);

	// 15 5
	// even
	if(n%10%2 ==0)
	{
		// even + even = even
		if (resultSoFar == 0)
			return 0;
		else //odd + even = odd
			return 1;
	}
	else// odd
	{
		// odd + even = odd
		if (resultSoFar == 0)
			return 1;
		else //odd + odd=even
			return 0;
	}
}

int main()
{
	int num;
	printf("Please enter the num: ");
	scanf("%d", &num);

	printf("The result is %d", digitsSumOdd(num));
	return 0;
}