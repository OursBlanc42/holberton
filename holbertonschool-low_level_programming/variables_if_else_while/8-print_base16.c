#include <stdio.h>

/**
 * main - Entry point
 * Description: Display all character of base 16
 * Return: character of base 16
 */

int main(void)
{
	char *str = "0123456789abcdef";

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
	return (0);
}
