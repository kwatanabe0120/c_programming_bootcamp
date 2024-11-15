#include <stdio.h>


char	toLower(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return letter - 'A' + 'a';
	else
		return -1;

}

char	toUpper(char letter)
{
	if (letter >= 'A' && letter <= 'Z')
		return letter - 'a' + 'A';
	else
		return -1;

}

int	main()
{
	char testLetter;
	char result;
	printf("Please enter Upper charactor: ");
	scanf("%c", &testLetter);

	result = toLower(testLetter);
	if (result == -1)
		printf("The result is %d", result);
	else
		printf("The result is %c", result);

	return 0;
}