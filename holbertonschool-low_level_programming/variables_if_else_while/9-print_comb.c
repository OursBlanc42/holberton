#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Display all possible combinations of single-digit number
 * separated by ', ' without char type.
 * With putchar, the character is displayed according to its ascii code
 * which is then incremented.
 *
 * Return: all digit from 0 to 9
 */

int main(void)
{
	int a = 48;

	while (a < (48 + 10))
	{
		putchar(a);

		if (a != (48 + 9))
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
		}
		a++;
	}

	putchar('\n');

	return (0);
}
