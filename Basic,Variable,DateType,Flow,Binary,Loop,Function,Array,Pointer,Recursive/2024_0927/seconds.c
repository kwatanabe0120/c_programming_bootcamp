#include<stdio.h>

int main ()
{
	int totalSeconds;
	int hours, minutes,seconds;
	printf("Seconds: ");
	scanf("%d", &totalSeconds);

	hours = totalSeconds / 3600;
	minutes = (totalSeconds - hours*3600) / 60;
	seconds = (totalSeconds - hours *3600) % 60;

	printf("%d:%d:%d", hours, minutes, seconds);



	return (0);
}