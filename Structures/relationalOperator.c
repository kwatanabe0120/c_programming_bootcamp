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

void incrementPoint(Point* p1)
{
	(*p1).x++;
	(*p1).y++;
}

Point addPoints(Point p1, Point p2)
{
	Point result;

	result.x = p1.x + p2.x;
	result.y = p1.y + p2.y;
	return result;
}

int main()
{
	Point p1 = {1,2}, p2 = {1,2};
	// if (equalPoint(p1,p2) == 1)
	// 	printf("The point is same");
	// else
	// 	printf("The point is NOT same");
	
	printf("\nAdd point\n");
	printf("P1 = {%d, %d}\n", p1.x, p1.y);
	printf("P2 = {%d, %d}\n", p2.x, p2.y);
	printf("Result = {%d, %d}\n", addPoints(p1,p2).x,addPoints(p1,p2).y);

	printf("\nIncrement point\n");
	printf("P1 = {%d, %d}\n", p1.x, p1.y);
	incrementPoint(&p1);
	printf("Result = {%d, %d}\n\n", p1.x, p1.y);


	return 0;
}