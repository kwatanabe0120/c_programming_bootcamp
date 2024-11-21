#include <stdio.h>
#include <string.h>

union union_point {
	int x;
	int y;
};

struct struct_point {
	int x;
	int y;
};


int main()
{
	union union_point p1;
	struct struct_point p2;

	p1.x = 10;
	p1.y = 20;
	printf("Union: x=%d, y=%d\n", p1.x, p1.y);

	p2.x = 10;
	p2.y = 20;
	printf("Struct: x=%d, y=%d\n", p2.x, p2.y);

	return 0;
}