#include <stdio.h>


int main()
{
	int a = 10, b = 20;
	printf("before\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("After\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}