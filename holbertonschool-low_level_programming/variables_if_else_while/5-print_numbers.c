#include <stdio.h>

/**
 * main - Entry point
 * Description: Display number from 0 to 9
 * Return: all digit from 0 to 9
 */

int main(void)
{
	char *str = "0123456789";

	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
	return (0);
}
