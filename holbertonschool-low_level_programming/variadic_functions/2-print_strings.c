#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * @separator: string to be printed between string
 * @n: number of int passed to the functions
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* Variable declaration and initialisation */
	unsigned int i;
	char *str;

	va_list args; /* Arguments list declaration */

	va_start(args, n); /* Initialize list with fixed arguments */

	if (separator == NULL)
	{
		separator = "";
	}

	/* loop each arguments start with "n" */
	for (i = 0; i < n; i++)
	{
		/* Retrieve each argument as a string */
		str = va_arg(args, char *);
		if (str == NULL)
		{	/* Replace NULL with “(nil)”. */
			str = "(nil)";
		}

		/* Display argument */
		printf("%s", str);

		/* Display separator (except on last string (n-1)) */
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	/* add new line */
	printf("\n");

	va_end(args); /* Ends the use of the list */

}
