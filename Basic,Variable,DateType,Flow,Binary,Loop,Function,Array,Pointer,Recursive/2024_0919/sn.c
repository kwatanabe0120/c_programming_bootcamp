#include <stdio.h>


int main (){
	double nth, initial, total, sum;

	printf("n-th Element: ");
	scanf("%lf", &nth);

	printf("Initial Term: ");
	scanf("%lf", &initial);

	printf("Total Terms: ");
	scanf("%lf", &total);

	sum = (initial + nth) * total / 2;
	printf("the sum is %lf", sum);

	return 0;
}