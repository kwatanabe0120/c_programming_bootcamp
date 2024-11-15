#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0;

    for (int i = 0; i <= num; i++) {
        sum += i;
    }
	printf("The sum of the numbers is: %d\n", sum);
	return 0;
}