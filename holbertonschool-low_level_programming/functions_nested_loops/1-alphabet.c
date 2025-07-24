#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Display alphabet on screen without printf or putchar
 * _putchar: Emulate function putchar
 * Return: Display putchar
 */

void print_alphabet(void)
{
	char *str = "abcdefghijklmnopqrstuvwxyz";

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
