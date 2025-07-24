#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all arguments it receives
 * (one by line followed by a new line)
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* declare and initialize variable */
	int n = 0;
	/* hide argc and argv to avoid compilator error*/
	(void)argc;
	(void)argv;

	/* While */
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}

	return (0);
}
