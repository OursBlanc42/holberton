#include <unistd.h>
#include "main.h"

/**
 * add- Entry point
 * Description:  add two int and returns results
 * @a: The first integer
 * @b: The second integer
 * Return: result of addition
 */

int add(int a, int b)
{
	/* declare variable */
	int result;

	/* calculation */
	result = a + b;

	return (result);
}
