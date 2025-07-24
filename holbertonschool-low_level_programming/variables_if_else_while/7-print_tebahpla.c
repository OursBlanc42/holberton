#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the alphabet from Z to A
 * Return: Alphabet
 */

int main(void)
{
	char *str = "zyxwvutsrqponmlkjihgfedcba";

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
	return (0);
}
