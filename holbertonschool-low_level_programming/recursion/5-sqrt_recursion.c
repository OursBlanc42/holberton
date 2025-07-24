#include "main.h"

/**
 * _sqrt_helper - Guess the square root (call by _sqrt_recursion)
 * Description: returns natural square root or -1 (if no natural sqrt)
 * @n: number
 * @g: guess
 * Return: natural squareroot or if n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_helper(int n, int g)
{
	/* Check if g squared equals n, meaning g is the natural square root */
	if (g * g == n)
	{
		return (g);
	}
	/* Check if g is within the possible solution range */
	/* (aka exceeded possible values for a natural square root) */
	else if (g >= n / 2)
	{
		return (-1); /* Return -1 if no natural square root exists */
	}
	/* Otherwise, increment g and continue recursion */
	else
	{
		return (_sqrt_helper(n, g + 1));
	}

}

/**
 * _sqrt_recursion - Entry point
 * Description: returns the natural square root of a number
 * @n: number
 * Return: natural squareroot or if n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	/* Check if n is negative. If it's true : return -1 (not a real root) */
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		/* Start recursion with initial guess g = 1 */
		return (_sqrt_helper(n, 1));
	}

}
