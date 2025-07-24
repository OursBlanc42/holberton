#include <unistd.h>
#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints a triangle shape made with #
 * @size: size of the triangle
 * Return: (0)
 */

void print_triangle(int size)
{
	/* declare and assign variable */
	int space;
	int sharp;
	int i;

	space = size - 1;
	sharp = size - space;

	if (size > 0)
	{
		while (size > 0)
		{
			for (i = 0; i < space; i++)
			{
				_putchar(' ');
			}

			for (i = 0; i < sharp; i++)
			{
				_putchar('#');
			}

			/* break line */
			_putchar('\n');

			/* decrement & increment parameters */
			space--;
			sharp++;
			size--;
		}
	}
	else
	{
		/* new line */
		_putchar('\n');
	}

}
