#include <stdio.h>

int main()
{
	double height;
	double width;

	printf("Height?:");
	scanf("%lf", &height);
	printf("Width?:");
	scanf("%lf", &width);

	double perimeter = height*2 + width*2;
	printf("the perimeter is %lf", perimeter);

	return 0;
}