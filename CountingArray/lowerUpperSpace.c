#include <stdio.h>

#define size 6

int main()
{
	char source[size] = {'K', ' ', ' ', 'e','v',' '};
	// alphabet = 26, lower and upper * 2 + space
	int count[53] = {0};

	for(int i =0; i < size; i++)
	{
		if (source[i] >= 'a' && source[i] <= 'z')
			count[source[i]- 'a']++;
		else if (source[i] >= 'A' && source[i] <= 'Z')
			count[source[i]-'A'+26]++;
		else if (source[i] == ' ')
			count[52]++;
	}
	int maxIndex = 0;
	for(int i =0; i < 53; i++)
	{
		if(count[i] > count[maxIndex])
			maxIndex = i;
	}

	char letter;
	if (maxIndex>= 0 && maxIndex <= 25)
		letter = maxIndex + 'a';
	else if (maxIndex>= 26 && maxIndex <= 51)
		letter = maxIndex-26 + 'A';
	else if (maxIndex == 52)
		letter = ' ';

	printf("The letter:%c, How many times:%d",letter, count[maxIndex]);

	return 0;
}