#include <stdio.h>

int main ()
{
	int year, month, day;
	printf("Enter the year, month, day as integer values: ");
	scanf("%d %d %d", &year, &month, &day);

	printf("year = %x\n", year);
	printf("month = %x\n", month);
	printf("day = %x\n", day);


	return 0;
}