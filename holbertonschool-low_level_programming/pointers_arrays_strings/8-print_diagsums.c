#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * Description : prints the sum of the two diagonals of a square matrix
 * @a : square matrix
 * @size : size of the array
 * Return: /
 */

void print_diagsums(int *a, int size)
{
	/* declare and initialize variables */
	int i;
	int j = 0; /*init for first diagonal \ */
	int k;
	int sum1 = 0; /* for diagonal \ */
	int sum2 = 0; /* for diagonal / */

	/* init for second diagonal / */
	k = size * (size - 1);

	/* For diagonal \ */
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[j];
		j = j + (size + 1);

		sum2 = sum2 + a[k];
		k = k - (size - 1);
	}

	printf("%d, %d\n", sum1, sum2);
}
