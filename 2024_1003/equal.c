#include <stdio.h>

int main ()
{
	int a, b;
	printf("Enter a interger value1: ");
	scanf("%d",&a);
	printf("Enter a interger value2: ");
	scanf("%d",&b);

	if (a == b)
		printf("EQUAL\n");
	else
		printf("NOT EQUAL\n");
	return 0;
}