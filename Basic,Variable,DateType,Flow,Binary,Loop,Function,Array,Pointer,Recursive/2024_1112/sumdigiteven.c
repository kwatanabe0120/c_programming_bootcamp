#include<stdio.h>

// 156 -> 15 -> 1
int isSumDigitsEven(int n)
{
	int resultSoFar;

	if (n < 10)
	{
		if(n%2 == 0)
			return 1;
		else
			return 0;
	}
	resultSoFar = isSumDigitsEven(n/10);
	if (n % 10 %2 == 0)
		if (resultSoFar == 1)
			return 1;
		else
			return 0;
	else
		if (resultSoFar ==1)
			return 0;
		else
			return 1;

}

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);

	printf("The result is %d", isSumDigitsEven(num));

	return 0;
}