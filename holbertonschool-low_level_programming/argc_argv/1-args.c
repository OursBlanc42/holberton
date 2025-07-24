#include <stdio.h>

/**
 * main - Entry point
 * Description: print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	/* declare and initialize variable */
	int result = 0;
	/* hide argc and argv to avoid compilator error*/
	(void)argc;
	(void)argv;

	/* Just counting number of arguments without program name */
	result = argc - 1;
	printf("%d\n", result);
	return (0);
}
