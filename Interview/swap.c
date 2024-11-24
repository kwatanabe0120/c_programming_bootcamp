#include <stdio.h>

// Function to swap two numbers wiout using 3rd variable
void swapewithout3rdvariable(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int a = 10, b =20;

	swapewithout3rdvariable(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}