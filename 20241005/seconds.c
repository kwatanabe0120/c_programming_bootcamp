#include <stdio.h>

int main (){
	int data;
	int hours, minutes, seconds;
	printf("Enter your seconds: ");
	scanf("%d", &data);

	hours = data / 3600;
	minutes = (data - hours * 3600) / 60;
	seconds = (data - hours * 3600) % 60;

	if (hours < 10)
		printf("0");
	printf("%d:", hours);
	if (minutes < 10)
		printf("0");
	printf("%d:", minutes);
	if (seconds < 10)
		printf("0");
	printf("%d\n", seconds);

	return 0;
}