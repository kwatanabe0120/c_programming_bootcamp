#include <stdio.h>

typedef struct date
{
	int day;
	int year;
	int month;
} Date;

void printDate(Date dt)
{
	printf("The date is %d/%d/%d\n", dt.year, dt.month, dt.day);
}

void printNextDate(Date dt)
{
	dt.day++;
	if (dt.day > 31)
	{
		dt.month++;
		dt.day = 1;
		if (dt.month > 12)
		{
			dt.month = 1;
			dt.year++;
		}
	}
	printDate(dt);
}
Date inputDate()
{
	Date dt;
	printf("Please enter the year: ");
	scanf("%d", &dt.year);
	printf("Please enter the month: ");
	scanf("%d", &dt.month);
	printf("Please enter the day: ");
	scanf("%d", &dt.day);
	return dt;
}

int main()
{
	Date today = inputDate();
	printDate(today);
	printNextDate(today);

}