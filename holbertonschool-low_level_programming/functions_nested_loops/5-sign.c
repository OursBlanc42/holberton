#include <unistd.h>
#include "main.h"

/**
 * print_sign - Entry point
 * Description: Print the sign of a number.
 * @n : number to check
 * Return: 0 if n = zero  / 1 if if n>0 / -1 if n<0
 */

int print_sign(int n)
{
	/* check n sign */
	if (n > 0)
	{
		/* if > 0 : show + sign */
		_putchar('+');

		return (1);
	}

	else if (n < 0)
	{
		/* if < 0 : show - sign */
		_putchar('-');

		return (-1);
	}

	else
	{
		/* print 0 if 0 */
		_putchar('0');
		return (0);
	}

}


