#include <unistd.h>
#include "main.h"

/**
 * mul - Entry point
 * Description:  Multiplies two integers
 * @a: First operand
 * @b: second operand
 * Return: result of multiplies
 */

int mul(int a, int b)
{
    /* declare and assign variable r for result*/
	int r;

	r = a * b;
	return (r);
}
