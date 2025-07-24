#include <unistd.h>
#include "main.h"

/**
 * puts_half - Entry point
 * Description: print the second half of the string
 * @str : string to cut in half and display
 * Return: 0
 */

void puts_half(char *str)
{
	/* declare and initialize variable */
	int end = 0;
	int start;
	int n;

	/* loop through chain until null charactere ('\0') */
	while (str[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	/* adjust end */
	end = end - 1;

	/* define n */
	n = (end - 1) / 2;

	/* define start */
	start = end - n;


	/* loop through chain and display */
	for (; start <= end ; start++)
	{
		_putchar(str[start]);
	}

	/* new line */
	_putchar('\n');
}

