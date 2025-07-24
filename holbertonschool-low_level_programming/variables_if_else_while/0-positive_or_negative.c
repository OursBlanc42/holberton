#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Generate a random number and display it to screen
 * Return: Random number
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* If generated number is positive */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	/* If generated number is negative */
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	return (0);
}
