#include "main.h"

/**
 * factorial - Entry point
 * Description: returns the factorial of a given number.
 * @n: given number
 * Return: factorial n or -1 (error code when given number < 0)
 */

int factorial(int n)
{
	/*
	* Check if n is negative, as factorials are only defined
	* for non-negative integers. If n is negative, return -1
	* to indicate an error.
	*/
	if (n < 0)
	{
		return (-1);
	}

	/*
	* Base case: if n is 1, return 1. This serves as the
	* stopping point for recursion, since factorial(1) is 1.
	* (NOTE: could work ith factorial(0) = 1 too...)
	*/
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		/*
		* Recursive case: multiply n by the factorial of (n - 1).
		* This operation will continue until the base case (n = 1)
		* is reached, allowing the final result to be calculated as
		* the recursive calls proceed.
		*/
		return (n * factorial(n - 1));
	}

}
