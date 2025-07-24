#include "main.h"

/**
 * _prime_helper - Try each int with a guess to find if its a prime number
 * Description: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input integer
 * @g: guess int
 * Return: 1 if its a prime number otherwise 0
 */

int _prime_helper(int n, int g)
{
	/* Check if n is divisible by a g (between 2 and root of n)i*/
	if (n % g == 0)
	{
		return (0);
	}
	else if (g * g > n)
	{
		/* Mathematically, we need to check up to the root of n */
		/* (no need after this limit) */
		return (1);
	}
	else
	{
		/* try with g+1 */
		return (_prime_helper(n, g + 1));
	}
}

/**
 * is_prime_number - Entry point
 * Description: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: input integer
 * Return: 1 if its a prime number otherwise 0
 */

int is_prime_number(int n)
{
	/* Check if n <= 1 and return 0 (prime number is > 1) */
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		/* Start recursion with initial guess g = 2 */
		return (_prime_helper(n, 2));
	}

}


