#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the alphabet (upper and lower case) on screen
 * Return: Alphabet
 */

int main(void)
{
	const char *str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
	return (0);
}
