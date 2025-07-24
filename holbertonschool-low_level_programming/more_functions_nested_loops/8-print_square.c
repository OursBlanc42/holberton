#include <unistd.h>
#include "main.h"

/**
 * print_square - Entry point
 * Description: prints a square shape made with #
 * @size: size of the square
 * Return: (0)
 */

void print_square(int size)
{
	/* declare variable */
	int i;
	int j = 0;

	if (size > 0)
	{
		while (j != size)
		{
			for (i = 0 ; i < size ; i++)
			{
				/* write a # */
				_putchar('#');
			}

			_putchar('\n');
			j++;
		}

	}
	else
	{
		/* new line */
		_putchar('\n');
	}

}
