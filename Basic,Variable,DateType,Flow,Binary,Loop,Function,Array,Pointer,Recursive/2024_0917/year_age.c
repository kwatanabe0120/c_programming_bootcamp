#include<stdio.h>

int main ()
{
	int year;
	int age;

	printf("please tell me current Year and Age");
	scanf("%d", &year);
	scanf("%d", &age);
	printf("Year you were born:%d\n", year - age);

	return 0;
}