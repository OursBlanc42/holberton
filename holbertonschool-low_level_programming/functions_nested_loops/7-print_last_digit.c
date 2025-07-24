#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: Display last digit of N number
 * @n : number to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	/* declare variable */
	int last_digit;

	/* m handles overly large inputs like INT_MIN. */
	long  int m;

	/* convert to abs value */
	if (n < 0)
	{
		/* convert n before x to avoid type overflow */
		m = (long  int)n * -1;
	}
	else
	{
		m = n;
	}

	/* with modulo extract last digit */
	last_digit = m % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
