#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of int passed to the functions
 * Return: prints numbers with separator or NULL if separator is null
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;	/* Variable declaration and initialisation */
	va_list args; /* Arguments list declaration */

	va_start(args, n); /* Initialize list with fixed arguments */

	/* special case */
	/* if n <= 0 print nothing and return (to quit) */
	if (n <= 0)
	{
		printf("\n");	/* add new line */
		return;
	}

	/* loop each arguments start with "n" */
	for (i = 0; i < n; i++)
	{	/* for each case we print the number */
		printf("%d", va_arg(args, int));
		/* Print the separator ONLY two condition : */
		/* 1 : not NULL and 2 : not the "last occurence " */
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");	/* add new line at end */

	va_end(args); /* Ends the use of the list */

}
