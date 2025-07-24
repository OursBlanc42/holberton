#include <stdio.h>

/**
 * main - Entry point
 * Description: print the name of the program followed by a new line.
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* hide argc and argv to avoid compilator error*/
	(void)argc;
	(void)argv;
	printf("%s\n", argv[0]);
	return (0);
}
