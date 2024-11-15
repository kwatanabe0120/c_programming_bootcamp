#include <stdio.h>

void resetToZero(int *ptr, int size);
void printArray(int *ptr, int size);

int main()
{
	int myArray[3] = {1,4,9};
	printArray(myArray,3);
	resetToZero(myArray, 3);
	printArray(myArray,3);


	return 0;
}

void resetToZero(int *ptr, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}
}

void printArray(int *ptr, int size)
{
	for (int i =0 ; i < 3; i++)
		printf("myArray[%d] is %d\n", i, ptr[i]);

}