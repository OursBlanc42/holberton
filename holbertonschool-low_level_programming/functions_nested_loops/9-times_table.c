#include <unistd.h>
#include "main.h"

/**
 * times_table - Entry point
 * Description:  Prints 9 times tables
 * Return: always 0 success
 */

void times_table(void)
{
	/* declare variable */
	int i, j, n, d, u;

	/* start table */
	for (j = 0 ; j <= 9 ; j++)
	{

		for (i = 0 ; i <= 9 ; i++)
		{
			n = i * j;
			d = n / 10;
			u = n % 10;

			if (i == 0)
			{
				_putchar('0');
			}
			else
			{
			    _putchar(',');
				_putchar(' ');

				if (d != 0)
				{
					_putchar(d + '0');
					_putchar(u + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(u + '0');
				}
			}

		}

		/* break line and star another table*/
		_putchar('\n');

	}
}
