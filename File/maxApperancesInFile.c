#include<stdio.h>

int main()
{
	char fileName[20];
	FILE* fp;
	int count[26] = {0};
	char test;

	printf("Please enter the file name: ");
	scanf("%s",fileName);

	fp = fopen(fileName, "r");

	if (fp != NULL)
	{
		while ((test = fgetc(fp)) != EOF)
		{
			if (test >= 'a' && test <='z')
				count[test-'a']++;
		}
		fclose(fp);

		int maxIndex = 0;

		for (int i = 0; i < 26; i++)
		{
			if(count[i]> count[maxIndex])
				maxIndex = i;
		}
		printf("Letter '%c' appeared %d times\n", maxIndex+'a', count[maxIndex]);
	}
	else
	{
		printf("Please confirm file name (error when open the file)\n");
	}
	return 0;
}