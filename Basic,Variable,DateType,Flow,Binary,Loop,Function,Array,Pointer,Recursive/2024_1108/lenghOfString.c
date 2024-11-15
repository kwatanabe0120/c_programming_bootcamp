#include <stdio.h>


int lengthOfString(char *sPtr);

int main()
{
	char str[100];
	int lengthWithNewLine = 0;

	puts("Please enter the string to check the lenght: "); 
	fgets(str, sizeof(str), stdin);
	
	lengthWithNewLine = lengthOfString(str);
	if (lengthWithNewLine>0 && str[lengthWithNewLine-1]=='\n')
	{
		str[lengthWithNewLine-1]= '\0';
	}

	printf("The lengh of '%s' is %d", str ,lengthOfString(str));

	return 0;
}

int lengthOfString(char *sPtr)
{
	int i = 0;

	while (sPtr[i] != '\0')
		{
			i++;
		}
	return i;

}
