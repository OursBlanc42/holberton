#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Display alphabet 10 times on screen without printf or putchar
 * _putchar: Emulate function putchar
 * Return: Display alphabet
 */

void print_alphabet_x10(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz"; /* chain to display */

	int a = 0; /* loop counter */

	/* while loop to display alphabet 10 times*/
	while (a < 10)
	{
		/* reset pointer */
		char *ttr = str;

		while (*ttr)
		{
			_putchar(*ttr++);
		}
		_putchar('\n');

	/* increment counter */
	a++;

	}
}
