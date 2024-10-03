#include <stdio.h>

int main ()
{
	int a, b, c;
	printf("Enter a interger value1: ");
	scanf("%d",&a);
	printf("Enter a interger value2: ");
	scanf("%d",&b);
	printf("Enter a interger value3: ");
	scanf("%d",&c);

	if (a == b && b == c)
		printf("EQUAL\n");
	else
		printf("NOT EQUAL\n");
	return 0;
}