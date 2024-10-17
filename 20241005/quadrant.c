#include <stdio.h>


int main(){
	int x, y;
	printf("Enter the x and y value: ");
	scanf("%d %d", &x, &y);

	if (x > 0)
		if (y > 0)
			printf("1st\n");
		else
			printf("4th\n");
	else
		if (y > 0)
			printf("2nd\n");
		else
			if(x == 0 && y ==0)
				printf("0 0");
			else
				printf("3nd\n");
	return 0;
}