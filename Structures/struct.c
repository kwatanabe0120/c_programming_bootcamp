#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main()
{
	struct point p1;
	printf("Enter x: ");
	scanf("%d", &p1.x);
	printf("Enter y: ");
	scanf("%d", &p1.y);

	printf("The point is (%d, %d)", p1.x, p1.y);

	
	return 0;
}