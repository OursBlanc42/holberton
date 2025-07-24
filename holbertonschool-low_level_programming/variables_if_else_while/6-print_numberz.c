#include <stdio.h>

/**
 * main - Entry point
 * Description: Display number from 0 to 9 without char type
 * Return: all digit from 0 to 9
 */

int main(void)
{
	int a = 48;

	while (a < (48 + 10))
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
