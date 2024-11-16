#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

typedef struct circle
{
	Point center;
	double radius;
}Circle;


int main()
{
	Point p1 = {3,5};
	Circle c1 = {p1, 35};

	printf("p1 in c1 = {%d,%d}\n", c1.center.x,c1.center.y);
	printf("The radius is %.2f", c1.radius);
	return 0;
}