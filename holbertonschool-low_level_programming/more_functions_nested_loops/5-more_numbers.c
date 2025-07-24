#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Description: Print 10 times numbres from 0 to 14
 * Return: (0)
 */

void more_numbers(void)
{
	/* declare variable and pointers */
	int i;
	char *str;

	for (i = 0 ; i <= 9 ; i++)
	{
		/* assign string to pointer */
		str = "01234567891011121314";

		while (*str)
		{
			_putchar(*str++);
		}

		/* next line */
		_putchar('\n');
	}
}
