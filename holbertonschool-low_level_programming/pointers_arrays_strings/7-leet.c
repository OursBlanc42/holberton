#include <unistd.h>
#include "main.h"

/**
 * leet - Entry point
 * Description: encore string into leet 1337
 * @str : string to leet
 * Return: /
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char arr_input[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char arr_output[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	/* loop through the chain */
	while (str[i] != '\0')
	{
		/* for each character, loop in the array*/
		for (j = 0 ; j <= 9 ; j++)
		{
			/* if a match : apply translation with second array*/
			if (str[i] == arr_input[j])
			{
				str[i] = arr_output[j];
			}
		}

		i++;
	}

	return (str);
}

