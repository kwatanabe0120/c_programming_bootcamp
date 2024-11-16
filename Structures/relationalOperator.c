#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

typedef struct employee
{
	int id;
	float age;
	float salary;
} Employee;

int equalPoint(Point p1, Point p2)
{
	if (p1.x == p2.x && p1.y == p2.y)
		return 1;
	else
		return 0;
}

int main()
{
	Point p1 = {1,2}, p2 = {1,2};

	if (equalPoint(p1,p2) == 1)
		printf("The point is same");
	else
		printf("The point is NOT same");

	return 0;
}