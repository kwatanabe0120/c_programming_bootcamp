#include<stdio.h>

int main()
{
	// char name[6];
	// printf("Enter your name: ");
	// scanf("%5s",name);

	// printf("%s", name);

	// char str[20];
	// scanf("%s",str);
	// printf("%s", str);

	char str[20];
	fgets(str, sizeof(str), stdin);
	// printf("%s", str);
	puts(str);
	return 0;
}