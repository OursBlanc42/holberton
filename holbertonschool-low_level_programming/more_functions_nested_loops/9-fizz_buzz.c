#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the numbers from 1 to 100, followed by a new line.
 * But for multiples of three print Fizz instead of the number and for the
 * multiples of five print Buzz. For numbers which are multiples of both three
 * and five print FizzBuzz.
 * Return: (0)
 */

int main(void)
{
	/* declare variable */
	int i;
	int mod3;
	int mod5;

	/* loop from 1 to 100 */
	for (i = 1 ; i <= 100 ; i++)
	{
		/* check if multiple of 3 and 5 */
		mod3 = i % 3;
		mod5 = i % 5;

		if (i == 100)
		{
			printf("Buzz\n");
			return (0);
		}

		if (mod3 == 0 && mod5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (mod3 == 0)
		{
			printf("Fizz ");
		}
		else if (mod5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

	}
	return (0);
}
