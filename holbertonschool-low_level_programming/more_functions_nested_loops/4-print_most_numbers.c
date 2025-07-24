#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description: Print numbers from 0 to 9 (except 2 and 4)
 * Return: (0)
 */

void print_most_numbers(void)
{
	/* declare and assign variable r for result*/
	int n;

	/* loop through each digit */
	for (n = 0 ; n <= 9 ; n++)
	{
		if (n != 2 && n != 4)
		{
		/* convert to charc and print */
		_putchar(n + '0');
		}
	}
		/* next line */
		_putchar('\n');
}
