#include <stdio.h>

float rectangle_area(float width, float height) {
	return width * height;
}


int main() {
	float width, height, result;

	printf("Enter the width of the rectangle: ");
	scanf("%f", &width);
	printf("Enter the height of the rectangle: ");
	scanf("%f", &height);

	result = rectangle_area(width, height);
	printf("The area of the rectangle is: %.2f\n", result);

	return 0;
}