# include <stdio.h>

int main ()
{
	float salary, hours, sum;

	printf("Salary per hours: ");
	scanf("%f", &salary);
	printf("Total Hours: ");
	scanf("%f", &hours);

	sum = salary * hours;
	printf("Your salary: %.2f\n", sum);


	return 0;
}