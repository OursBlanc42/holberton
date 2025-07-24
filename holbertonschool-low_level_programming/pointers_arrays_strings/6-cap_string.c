#include <unistd.h>
#include "main.h"

/**
 * cap_string - Entry point
 * Description: capitalize first letter of each word in a string
 * @str : string to check
 * Return: /
 */

char *cap_string(char *str)
{
	int i = 0, j = 0, end = 0;		/* declare and initialize variable */
	int check = 0;					/* 0 = wrong & 1 = true */

	/* array = space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, } */
	int separators[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	/* loop in the chain, check the ASCII code, switch to uppercase */
	while (str[end] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57) /* if in the 0-9*/
		{
			check = 1; /* switch check to not apply on a letter after a digit */
		}

		if (((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		&& check == 0) /* if in the A-Z and a-z range */
		{
			/* if lower case (check ascii code range) */
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32; /*switch case for upper case*/
			}
			check = 1;	/* Set check to uppercase the first char only */
		}
		/* check if the character is a separator */
		else
		{
			for (j = 0 ; j <= 13 ; j++)
			{
				if (str[i] == separators[j])
				{
				check = 0; /* reset check */
				}
			}
		}
		i++;
		end++;
	}
	return (str);
}

