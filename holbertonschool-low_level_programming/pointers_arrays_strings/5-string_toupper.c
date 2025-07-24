#include <unistd.h>
#include "main.h"

/**
 * string_toupper - Entry point
 * Description: switch all lowercase to uppercase
 * @str : string to check and switch from lowercase to uppercase
 * Return: /
 */

char *string_toupper(char *str)
{
	/* declare and initialize variable */
	int i;
	int end = 0;

	/* loop through chain until null charactere ('\0') */
	while (str[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	/* loop in the chain, check the ASCII code, switch to uppercase */
	for (i = 0; i < end ; i++)
	{
		/* if in the lowercase range */
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);

}

