#include <stdio.h>

int smallerThanNum(int num)
{
	int testNum = 0;
	printf("Enter value: ");
	scanf("%d", &testNum);

	if (testNum == -1)
		return 0;
	
	if (testNum >= num)
		return 0+ smallerThanNum(num);
	else
		return 1+ smallerThanNum(num);
}	


int main()
{
	int num;
	int result = 0;
	printf("Please enter the num: ");
	scanf("%d", &num);

	result = smallerThanNum(num);

	printf("The result is %d\n", result);
	return 0;
}