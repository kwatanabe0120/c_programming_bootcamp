#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

void printPoint(Point p)
{
	printf("(%d,%d)\n", p.x, p.y);
}
Point inputPoint()
{
	Point p;
	printf("Enter X value for point: ");
	scanf("%d", &p.x);
	printf("Enter Y value for point: ");
	scanf("%d", &p.y);
	return p;
}

int main()
{
	Point p1 = inputPoint();
	printf("The point before change\n");
	printPoint(p1);
	p1.x += 3;
	p1.y +=10;
	printf("The point After change\n");
	printPoint(p1);
	return 0;
}