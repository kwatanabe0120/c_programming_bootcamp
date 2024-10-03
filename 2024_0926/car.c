#include <stdio.h>

int main ()
{
	int distance = 300;
	int speed = 80;
	int hours = distance/speed;
	float speedInMinutes = speed / 60.0;
	float reminaingMinuts = (distance % speed) / speedInMinutes;

	printf("The tiem from A to B will tale %d hours and %f minutes\n", hours, reminaingMinuts);
	
	return 0;
}