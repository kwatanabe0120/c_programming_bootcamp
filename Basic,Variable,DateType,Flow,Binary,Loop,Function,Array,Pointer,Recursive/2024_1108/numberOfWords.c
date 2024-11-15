// #include<stdio.h>


// int main()
// {
// 	char array[100];
// 	int i=0;
// 	int count = 0;
// 	puts("Please enter the string: ");
// 	fgets(array, sizeof(array), stdin);

// // check the lenght of string
// 	int lenght = 0;
// 	while(array[lenght] != '\0')
// 		lenght++;

// // delete first space
// 	while(array[i] == ' ')
// 		i++;

// // delete last '\n' of string
// 	if (array[lenght -1] == '\n')
// 	{
// 		array[lenght-1]='\0';
// 		lenght--;
// 	}

// // delete last space
// 	while(lenght>0 && array[lenght-1] == ' ')
// 	{
// 		lenght--;
// 	}

// // count the words left in the string
// 	while (i < lenght)
// 	{
// 		if(array[i] == ' ' && array[i+1] != ' ' && array[i+1] != '\0')	
// 			count++;
// 		i++;
// 	}

// 	if (lenght > 0)
// 		count++;
	
// 	printf("The number of words is %d\n", count);


// 	return 0;
// }



#include<stdio.h>

int main()
{
	char array[100];
	int i = 0;
	int count = 0;
	puts("Please enter the string: ");
	fgets(array, sizeof(array), stdin);

	int length = 0;
	while (array[length] != '\0')
		length++;
	
	if(array[length -1] == '\n')
	{
		array[length-1] = '\0';
		length--;
	}

	while(array[i] == ' ')
		i++;
	
	int inWord = 0;
	while (i < length)
	{
		if (array[i] != ' ')
		{
			if (!inWord)
			{
				count++;
				inWord = 1;
			}
		}
		else
		{
			inWord = 0;
		}
		i++;
	}

	printf("The number of words is %d\n", count);

	return 0;
}