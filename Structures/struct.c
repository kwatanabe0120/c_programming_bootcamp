#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	struct date graduateDate;
	printf("Enter year: ");
	scanf("%d", &graduateDate.year);
	printf("Enter month: ");
	scanf("%d", &graduateDate.month);
	printf("Enter day: ");
	scanf("%d", &graduateDate.day);


	printf("The Graduation day is %d/%d/%d", graduateDate.year, graduateDate.month, graduateDate.day);

	
	return 0;
}