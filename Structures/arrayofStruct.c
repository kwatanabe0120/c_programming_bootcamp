#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} Point;

int main()
{
	Point pointsArray[5];

	for (int i=0; i < 5; i++)
	{
		printf("Enter point #%d 'x' coordinate: ", i+1);
		scanf("%d", &pointsArray[i].x);
		printf("Enter point #%d 'y' coordinate: ", i+1);
		scanf("%d", &pointsArray[i].y);
	}

	for (int i=0; i < 5; i++)
	{
		printf("#%d point:(%d, %d)\n", i+1, pointsArray[i].x, pointsArray[i].y);
	}

	return 0;

}