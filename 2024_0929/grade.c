#include <stdio.h>

int main (){
	int grade;
	printf("Enter your grade: ");
	scanf("%d", &grade);

	if (grade >= 60)
		printf("congratulations!");
	else
		printf("Try again...");
	return (0);
}