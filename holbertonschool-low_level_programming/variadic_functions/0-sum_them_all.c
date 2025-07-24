#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first fix argument
 * Return: sum of all parameters unless n == 0 in which case 0
 */

int sum_them_all(const unsigned int n, ...)
{
	/* Variable declaration and initialisation */
	unsigned int i;
	int total = 0;

	va_list args; /* Arguments list declaration */

	va_start(args, n); /* Initialize list with fixed arguments */


/* check special case */
	if (n == 0)
	{
		return (0);
	}
	else
	{   /* loop each arguments start with "n" */
		for (i = 0; i < n; i++)
		{   /* catch each args as a int */
			total += va_arg(args, int);
		}
	}

	va_end(args);	/* Ends the use of the list */
	return (total);

}
