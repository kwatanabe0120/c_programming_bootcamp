#include<stdio.h>




int main()
{
	char array1[]={'H','e','l','l','o'};
	char array2[]={'H','e','l','l','o','\0'};
	char array3[]="Hello";

	printf("Array1:\n");

	for (int i = 0; i < 6; i++)
		printf("%c", array1[i]);
	
	printf("\n");
	printf("Array2:\n");

	for (int i = 0; i < 6; i++)
		printf("%c", array2[i]);
	printf("\n");
	printf("Array3:\n");

	for (int i = 0; i < 6; i++)
		printf("%c", array3[i]);
	printf("\n");
	
	return 0;
}