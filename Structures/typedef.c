#include<stdio.h>

typedef struct date
{
	int day;
	int month;
	int year;
} Date;

Date inputDate()
{
	Date dt;
	printf("Enter day: ");
	scanf("%d",&dt.day);
	printf("Enter month: ");
	scanf("%d",&dt.month);
	printf("Enter year: ");
	scanf("%d",&dt.year);
	return dt;
}

void printDate(Date dt)
{
	printf("Year=%d, Month=%d, day=%d\n", dt.year,dt.month,dt.day);
}

int main()
{
	
	printDate(inputDate());

	return 0;
}