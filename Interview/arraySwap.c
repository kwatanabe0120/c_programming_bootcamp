#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

// void swap(int* a, int* b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// void swapArray(int* array1, int* array2)
// {
// 	int i;
// 	for (i = 0; i < SIZE; i++)
// 		swap(&array1[i], &array2[i]);
// }

void printArray(int* array)
{
	int i;

	for (i = 0; i < SIZE; i ++)
		printf("%d ", array[i]);
	printf("\n");
}
int *generateArray(int size)
{
	int *array;
	array = (int*)malloc(size* sizeof(int));
	for (int i = 0; i< size; i++)
		scanf("%d",&array[i]);
	return array;
}

void swapArr01(int **ptr1, int **ptr2)
{
	int *temp;
	temp = *ptr1;
	*ptr1= *ptr2;
	*ptr2 = temp;
}

int main()
{
	int *Arr1, *Arr2;
	int sizeArr1,sizeArr2;
	
	// int array1[SIZE] = {1,1,1,1,1};
	// int array2[SIZE] = {2,2,2,2,2};

	printf("Please enter size for array1: ");
	scanf("%d", &sizeArr1);
	printf("Please enter size for array2: ");
	scanf("%d", &sizeArr2);

	Arr1 = generateArray(sizeArr1);
	Arr2 = generateArray(sizeArr2);

	printf("Before swap\n");
	printArray(Arr1);
	printArray(Arr2);

	// swapArray(array1, array2);
	swapArr01(&Arr1, &Arr2);
	printf("After swap\n");
	printArray(Arr1);
	printArray(Arr2);

	free(Arr1);
	free(Arr2);
	return 0;
}