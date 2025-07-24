#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: Draw straight line in terminal with _ character
 * @n: length of the line
 * Return: (0)
 */

void print_diagonal(int n)
{
	/* declare and assign variable */
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (n > 0)
		{
			for (i = 0 ; i < j ; i++)
			{
				_putchar(' ');
			}

		/* write a diaognal and break line */
		_putchar('\\');
		_putchar('\n');

		/* increment parameters */
		j++;
		n--;
		}
	}
	else
	{
		/* new line */
		_putchar('\n');
	}

}
