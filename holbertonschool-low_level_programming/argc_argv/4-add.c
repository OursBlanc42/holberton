#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: adds positive numbers.
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0 if success or 1 if error
 */

int main(int argc, char *argv[])
{
	/* declare and initialize variable */
	int result = 0;
	int n;
	int i = 0;
	(void)argc;		/* hide argc and argv to avoid compilator error */
	(void)argv;		/* hide argc and argv to avoid compilator error */

	if (argc < 2)	/* Check if we have 2 numbers minimum to adds */
	{
		printf("0\n");
		return (0);
	}

	else
	{
		/* initialize n to start with first number and not prog name */
		n = 1;
		/* loop through each arg */
		while (n < argc)
		{
			/* loop through substring to check if each char is digit */
			for (i = 0; argv[n][i] != 0; i++)
			{
				if (!(isdigit(argv[n][i])))
				{
					printf("Error\n");
					return (1);
				}
			}

			/* calculation... */
			result = result + (atoi(argv[n]));

			n++;
		}

		printf("%d\n", result);
		return (0);
	}
}
