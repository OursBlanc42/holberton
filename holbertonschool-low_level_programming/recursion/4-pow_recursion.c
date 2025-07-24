#include "main.h"

/**
 * _pow_recursion - Entry point
 * Description: returns the value of x raised to the power of y.
 * @x: base number
 * @y: exponent
 * Return: x ^ y, or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	/*
	 * Check if y is negative. If y is less than 0, return -1
	 * as an error code, since raising to a negative exponent
	 * is not defined for this function.
	 */
	if (y < 0)
	{
		return (-1);
	}

	/*
	* Base case: if y equals 0, return 1.
	* Any number raised to the power of 0 is 1,
	* so this stops the recursion.
	*/
	else if (y == 0)
	{
		return (1);
	}

	/*
	* Recursive case: multiply x by the result of _pow_recursion
	* with y reduced by 1. This continues until y reaches 0,
	* at which point all recursive calls begin to return.
	*/
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}

}
