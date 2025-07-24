#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of arguments
 * @argv: array who contains each arguments
 * Return: 0 if success or 1 if error
 */

int main(int argc, char *argv[])
{
	/* declare and initialize variable */
	int nb_coin = 0;		/* 0 coin at the begining */
	int quotient = 0;
	int remainder = 0;
	int i;
	int value;
	int arr_coin[5] = {25, 10, 5, 2, 1};	/* available coins */
	(void)argc;		/* hide argc and argv to avoid compilator error */
	(void)argv;		/* hide argc and argv to avoid compilator error */
	if (argc != 2)	/* Check if we have exactly one argument (+ prog name) */
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)	/* Check if the argument is negative */
	{
		printf("0\n");
		return (0);
	}
	else /* loop through substring to check if each char is digit */
	{
		for (i = 0; argv[1][i] != 0; i++)
		{
			if (!(isdigit(argv[1][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		value = atoi(argv[1]); /* intialize remainder var for loop */
		for (i = 0; i < 5; i++)
		{
			quotient = value / arr_coin[i];
			remainder = value % arr_coin[i];
			nb_coin = quotient + nb_coin;
			value = remainder;
		}
	}
		printf("%d\n", nb_coin);
		return (0);
}
