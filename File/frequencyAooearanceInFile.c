#include<stdio.h>

int main()
{
	char filename[30];
	int count[26] = {0};
	FILE* fp;
	char checkingLetter;

	printf("Please enter the filename: ");
	scanf("%s", filename);


	fp = fopen(filename, "r");

	if (fp != NULL)
	{
		while ((checkingLetter = fgetc(fp)) != EOF)
			{
				if(checkingLetter >= 'a' && checkingLetter <= 'z')
					count[checkingLetter - 'a']++;
			}
	}
	for (int i = 0; i < 26; i++)
	{
		printf("The letter '%c' appears %d times\n", i+'a', count[i]);
	}
	return 0;
}