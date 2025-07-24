#include <stdio.h>

/**
 * main - entry point
 * Description:  Prints 98first terms of fibonacci suite
 * Return: 0 always sucess
 */

int main(void)
{
	/* declare variable */
	double a, b, c, i;

	/* initialize */
	a = 0;
	b = 1;

	/* loop and print fibonacci result */
	for (i = 0 ; i < 98 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%.0f, ", c);
	}

	/* for last loop dont print the ,*/
	c = a + b;
	a = b;
	b = c;
	printf("%.0f\n", c);

	return (0);
}
