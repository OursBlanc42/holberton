#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Description: display n elements of an array of integers
 * @a : array of integer
 * @n : number of element to display
 * Return: 0
 */

void print_array(int *a, int n)
{
	/* declare and initialize variable */
	int count;
	int item;

	/* loop through chain and display */
	for (count = 0 ; count < n ; count++)
	{
		item = *(a + count);
		printf("%d", item);

		if (count != (n - 1))
		{
			printf(", ");
		}

	}

	/* next line */
	printf("\n");

}

