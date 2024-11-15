#include<stdio.h>

int sumOfArray(int *pArr, int size);

int main()
{
	int array[3] = {1,3,10};
	int result;

	result = sumOfArray(array, 3);
	printf("The result is %d", result);

}

int sumOfArray(int *pArr, int size)
{
	int i, sum = 0;

	for (i=0; i<size; i++)
		sum += pArr[i];
	
	return sum;

}
