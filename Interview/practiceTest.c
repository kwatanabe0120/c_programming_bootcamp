#include<stdio.h>
#include<stdlib.h>


void printArray(int *array, int size)
{
	for (int i =0; i<size; i++)
		printf("%d ",array[i]);
	printf("\n");
}

int *memoryArray(int size)
{
	int *array;
	array = (int*)malloc(size*sizeof(int));
	if (array != NULL)
		return array;
	else
	{
		printf("Memory allocation failed\n");
		exit(-1);
	}
}

void inputArray(int *array, int size)
{
	for (int i =0; i < size; i++)
	{
		printf("Enter #%d elements: ", i+1);
		scanf("%d", &array[i]);
	}
}

void swapByDoublePointer(int **array1, int **array2)
{
	int *temp = *array1;
	*array1 = *array2;
	*array2 = temp;
}

int main()
{
	int *array1, *array2;
	int sizeArray1, sizeArray2;
	printf("Enter the size of the first array: ");
	scanf("%d", &sizeArray1);
	printf("Enter the size of the second array: ");
	scanf("%d", &sizeArray2);

	array1 = memoryArray(sizeArray1);
	array2 = memoryArray(sizeArray2);
	inputArray(array1, sizeArray1);
	inputArray(array2, sizeArray2);

	printf("Before swapping:\n");
	printf("Array1: ");
	printArray(array1, sizeArray1);
	printf("Array2: ");
	printArray(array2, sizeArray2);
	
	swapByDoublePointer(&array1, &array2);

	printf("After swapping:\n");
	printf("Array1: ");
	printArray(array1, sizeArray1);
	printf("Array2: ");
	printArray(array2, sizeArray2);

	free(array1);
	free(array2);

	return 0;
}