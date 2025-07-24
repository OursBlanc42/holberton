#include <stdio.h>

/**
 * main - entry point
 * Description:  Prints 50first terms of fibonacci suite
 * Return: 0 always sucess
 */

int main(void)
{
	/* declare variable */
	unsigned long int a, b, c, i;

	/* initialize */
	a = 0;
	b = 1;

	/* loop and print fibonacci result */
	for (i = 0 ; i < 49 ; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}

	/* for last loop dont print the ,*/
	c = a + b;
	a = b;
	b = c;
	printf("%lu\n", c);

	return (0);
}
