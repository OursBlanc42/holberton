#include "main.h"

/**
 * print_chessboard - Entry point
 * Description : print a chessboard in ASCII
 * @a : size (normaly = 8)
 * Return: /
 */

void print_chessboard(char (*a)[8])
{
	/* declaration and initialization */
	int i;
	int j;
	char value;

	/* display each array element value */
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			value = a[i][j];
			_putchar(value);
		}
		_putchar('\n');
	}

}
