#include<stdio.h>

int charactorOccurunces(char target)
{
	char testChar;
	printf("Please enter a single char: ");
	scanf(" %c", &testChar);

	if (testChar == '$')
		return 0;
	
	if (testChar == target)
		return 1 + charactorOccurunces(target);
	else
		return charactorOccurunces(target);

}

int main()
{
	char targetChar;
	printf("Please enter target char: ");
	scanf(" %c", &targetChar);

	printf("The total occurunces is %d\n", charactorOccurunces(targetChar));
	return 0;
}