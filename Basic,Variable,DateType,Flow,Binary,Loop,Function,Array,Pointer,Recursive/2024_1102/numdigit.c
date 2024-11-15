#include <stdio.h>


float numDigit(int num, int digit)
{
	int targetDigit;
	int average = 0;
	int digitCount = 0;

// 13572
	while (num > 0)
	{
		targetDigit = num % 10;
		if (targetDigit < digit)
			{
				digitCount++;
				average += targetDigit; 
			}
		num = num / 10;
	}
	printf("The digitcount is %d\n", digitCount);
	if (digitCount == 0)
        return 0.0; // Avoid division by zero
	return ((float)average/digitCount);

}

int main ()
{
	int num, digit;
	float average;
	printf("please enter the num: ");
	scanf("%d", &num);
	printf("please enter the digit: ");
	scanf("%d", &digit);

	average = numDigit(num, digit);
	printf("The average is %.1f\n", average);

	return 0;
}