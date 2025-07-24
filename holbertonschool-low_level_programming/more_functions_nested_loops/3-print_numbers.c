#include <unistd.h>
#include "main.h"

/**
 * print_numbers - Entry point
 * Description: Print numbers from 0 to 9
 * Return: (0)
 */

void print_numbers(void)
{
	/* declare and assign variable r for result*/
	int n;

	/* loop through each digit */
	for (n = 0 ; n <= 9 ; n++)
	{
		/* convert to charc and print */
		_putchar(n + '0');
	}
		/* next line */
		_putchar('\n');
}
