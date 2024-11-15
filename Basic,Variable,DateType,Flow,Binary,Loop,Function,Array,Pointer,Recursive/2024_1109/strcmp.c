#include <stdio.h>


int my_strcmp(char *str1, char *str2)
{
	int check = 0;
	int i = 0;

	while (str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
		{
			if (str1[i] > str2[i])
				return 1;
			else
				return -1;
		}
		i++;
	}
	// Check if the strings are of different lengths
    if (str1[i] == '\0' && str2[i] == '\0')
        return 0;
    else if (str1[i] == '\0')
        return -1;
    else
        return 1;

	return check;

}


int main()
{

	char str1[] = "Hello";
    char str2[] = "Hello";

    int result = my_strcmp(str1, str2);

    if (result == 0)
        printf("Strings are equal\n");
    else if (result > 0)
        printf("String 1 is greater than String 2\n");
    else
        printf("String 1 is less than String 2\n");


	return 0;
}