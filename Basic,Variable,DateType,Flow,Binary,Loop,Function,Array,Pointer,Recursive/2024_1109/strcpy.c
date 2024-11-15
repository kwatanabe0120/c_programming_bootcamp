// #include <stdio.h>
// #include <string.h>


// void my_strcpy(char *des, char *source)
// {
// 	int i = 0;

// 	if(strlen(source) >sizeof(des))
// 	{
// 		puts("No enough memory!\n");
// 		return;
// 	}
	
// 	while(source[i] != '\0')
// 	{
// 		des[i] = source[i];
// 		i++;
// 	}
// 	des[i] = '\0';
// }


// int main()
// {
// 	char source[]="Hello";
// 	char des[6];

// 	strcpy(des, source);

// 	char source2[]="Hello";
// 	char des2[2];

// 	my_strcpy(des2, source2);

// 	printf("%s\n", des);
// 	printf("%s\n", des2);

// 	return 0;

// }

#include <stdio.h>
#include <string.h>

int my_strcpy(char *des, size_t des_size, const char *source)
{
    int i = 0;

    if (strlen(source) >= des_size) {
        puts("No enough memory!");
        return 1; // Return 1 on error
    }

    while (source[i] != '\0')
    {
        des[i] = source[i];
        i++;
    }
    des[i] = '\0'; // Add null terminator to the destination string

    return 0; // Return 0 on success
}

int main()
{
    char source[] = "Hello";
    char des[3];

    int result = my_strcpy(des, sizeof(des), source); // Use my_strcpy and check the result

    if (result == 0) {
        printf("Copied string: %s\n", des); // Print the copied string if successful
    } else {
        printf("Failed to copy string.\n"); // Print error message if failed
    }

    return 0;
}