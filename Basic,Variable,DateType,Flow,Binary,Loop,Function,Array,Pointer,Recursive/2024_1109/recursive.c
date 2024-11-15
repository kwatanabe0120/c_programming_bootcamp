#include <stdio.h>

// 1,2,3,4...n
// =
// n + n-1 + n-2 + n-3 ....1

int sumUpto(int num)
{
	printf("SumUpTo(%d)\n", num);
	if(num == 1)
		return 1;
	return num + sumUpto(num-1);
}
int main()
{
	int num, result;
	puts("Enter the positive number: ");
	scanf(" %d", &num);

	result = sumUpto(num);
	printf("The result is %d", result);
	return 0;
}