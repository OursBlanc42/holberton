#include <unistd.h>
#include "main.h"

/**
 * print_line - Entry point
 * Description: Draw straight line in terminal with _ character
 * @n: length of the line
 * Return: (0)
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}

	/* new line */
	_putchar('\n');
}
