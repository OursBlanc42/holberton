#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: multiplies two numbers (result as an integer)
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0 if success or 1 if error
 */

int main(int argc, char *argv[])
{
	/* declare and initialize variable */
	int result = 0;
	int a = 0;
	int b = 0;
	/* hide argc and argv to avoid compilator error*/
	(void)argc;
	(void)argv;

	/* Check if we have 3 arguments (= 2 numbers + name of program) */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/* Multiply and display result */
	else
	{
		/* Convert char to int */
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = (a * b);
		printf("%d\n", result);
		return (0);
	}
}
