#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the alphabet on screen without E and Q letter
 * Return: Alphabet
 */

int main(void)
{
	char *str = "abcdfghijklmnoprstuvwxyz";

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
	return (0);
}
