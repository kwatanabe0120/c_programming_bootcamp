#include <stdio.h>

int main(){

	int score;
	printf("Enter your score: ");
	scanf("%d", &score);

	if (score >= 90)
		printf("Perfect\n");
	else if (score >=60 )
		printf("Not bad\n");
	else
		printf("Come on..., try again\n");

	return 0;
}