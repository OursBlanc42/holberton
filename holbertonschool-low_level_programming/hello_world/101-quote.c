#include <unistd.h> /* dup */
#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints string in stderr'
 * Return: Always 1 (fail)
 */

int main(void)
{
	/* define char string with pointer */
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	/* duplicate stdout (1) to stderr (2) */
	dup2(2, 1);

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');

	return (1);
}
