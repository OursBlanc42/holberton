#include <unistd.h>
#include "main.h"

/**
 * puts2 - Entry point
 * Description: displays one character out of two
 * @str : string to reverse
 * Return: 0
 */

void puts2(char *str)
{
	/* declare and initialize variable */
	int end = 0;
	int start;

	/* loop through chain until null charactere ('\0') */
	while (str[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	/* adjust end */
	end = end - 1;

	/* loop through chain and display not odd character */
	for (start = 0; start <= end ; start++)
	{
		/* check if not odd */
		if (start % 2 == 0)
		{
			_putchar(str[start]);
		}
	}
	/* new line */
	_putchar('\n');
}

