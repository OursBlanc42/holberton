#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: Display the last digit on a random number
 * @n : checked number
 * @last_digit : last digit of n
 * Return: Last digit
 */

int is_positive(int n, int last_digit);
int is_negative(int n, int last_digit);

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	/* If generated number is positive */
	if (n > 0)
	{
		is_positive(n, last_digit);
	}

	/* If generated number is negative */
	if (n < 0)
	{
		is_negative(n, last_digit);
	}

	return (0);
}

/**
 * is_positive - Check if a number is greater than 0
 * @n : checked number
 * @last_digit : last digit of n
 * Return: Last digit
 */

int is_positive(int n, int last_digit)
{
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	}

	if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}

	if (last_digit < 6 && last_digit != 0)
	{
		printf(
		"Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}

	return (0);
}

/**
 * is_negative - Check if a number is lower than 0
 * @n : checked number
 * @last_digit : last digit of n
 * Return: Last digit
 */

int is_negative(int n, int last_digit)
{
	if (last_digit > 5)
	{
		printf("Last digit of %d is -%d and is greater than 5\n", n, last_digit);
	}

	if (last_digit == 0)
	{
		printf("Last digit of %d is -%d and is 0\n", n, last_digit);
	}

	if (last_digit < 6 && last_digit != 0)
	{
		printf(
		"Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);
	}

	return (0);
}
