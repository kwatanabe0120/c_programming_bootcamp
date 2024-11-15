#include <stdio.h>

int main()
{
	float a1,d,an;
	int n;

	printf("enter the initial term (a1): ");
	scanf("%f", &a1);
	printf("enter the difference in the arithmetic sequence : ");
	scanf("%f", &d);
	printf("enter the number of elements in the arithmetic sequence : ");
	scanf("%d", &n);

	printf("The n-th term of the Arithmetic sequence = %f\n", a1 + (n - 1 )*d);

	return 0;
}