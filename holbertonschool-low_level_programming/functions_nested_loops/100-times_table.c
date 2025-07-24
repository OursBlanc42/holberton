#include <unistd.h>
#include "main.h"

/**
 * print_cdu - print result
 * Description:  Prints hundreds, tens, and units with formatting.
 * @c: hundreds digit
 * @d: tens digit
 * @u: units digit
 * Return: nothing
 */

void print_cdu(int c, int d, int u)
{
	_putchar(',');
	if (c != 0)
	{
		_putchar(' ');
		_putchar(c + '0');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else if (d != 0)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(d + '0');
		_putchar(u + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(u + '0');
	}
}


/**
 * print_times_table - Entry point
 * Description:  Prints times tables of n
 * @n : the table we want
 * Return: always 0 success
 */

void print_times_table(int n)
{
	/* declare variable */
	int i, j, k, c, d, u;

	/* check if n is in the acceptable range */
	if (n > 15 || n < 0)
	{
		/* return nothing */
		return;
	}

	/* start table */
	for (j = 0 ; j <= n ; j++)
	{

		for (i = 0 ; i <= n ; i++)
		{
			k = i * j;
			c = k / 100;
			d = (k / 10) % 10;
			u = k % 10;

			if (i == 0)
			{
				_putchar('0');
			}
			else
			{
				print_cdu(c, d, u);
			}

		}

		/* break line and star another table*/
		_putchar('\n');

	}
}


