#include <stdio.h>

int main() {
    int num;
	int i;
    printf("Enter a number: ");
    scanf("%d", &num);

// after the last number, I dont want a comma
	for (i = 0; i <= num; i++) {
		printf("%d", i);
		if (i < num) {
			printf(",");
		}
	}
	printf("\n");
	for (i = num; i > 0; i--) {
		printf("%d", i);
		if (i > 1) {
			printf(",");
		}
	}
	printf("\n");

	
    return 0;
}