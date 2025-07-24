#include <unistd.h>
#include "main.h"



/**
 * recompose_value - recompose value
 * Description: recalculate each power of 10 at each rank to recompose the nb
 * @s: string
 * @first_digit: first digit
 * @last_digit : last_digit
 * Return: recomposed value
 */
unsigned int recompose_value(char *s, int first_digit, int last_digit)
{
	unsigned int value = 0;
	int power = 1;
	int i;
	int digit_value;

	/* recalculate each power of 10 at each rank to recompose the number */
	for (i = last_digit - 1; i >= first_digit; i--)
	{
		digit_value = (s[i] - '0') * power;
		value += digit_value;

		/* Avoid overflow by limiting power to 1,000,000,000 */
		if (power != 1000000000)
		{
			power *= 10;
		}
	}

	return (value);
}


/**
 * result_calculation - display the result
 * Description: convert value to result (convert to signed)
 * @value : entry
 * @minus : check the sign
 * Return: integer
 */
int result_calculation(unsigned int value, int minus)
{
	int result = 0;

	if (minus % 2 == 1)
	{
		result = value * -1;
	}
	else
	{
		result = value;
	}
	return (result);
}


/**
 * _atoi - Entry point
 * Description: convert string to an integer
 * @s: entry string
 * Return: integer
 */
int _atoi(char *s)
{
	/* declare and define variable */
	unsigned int value = 0;
	int result = 0, count = 0, minus = 0;
	int first_digit = 0, last_digit = 0;

	/* loop through source chain until null charactere ('\0') */
	while (s[count] != '\0')
	{
		/* count the occurence of minus to detect if its negative*/
		if (s[count] == '-')
		{
			minus++;
		}
		/* check there is a digit*/
		if (s[count] >= '0' && s[count] <= '9')
		{
			/* setup variable */
			first_digit = count;
			last_digit = count;
			break;
		}
		/* increment count for each loop */
		count++;
	}

	/* as soon as the first digit is found, loop to the last digit found */
	while (s[count] >= '0' && s[count] <= '9')
	{
		last_digit++;
		count++;
	}

	/* call subfunction */
	value = recompose_value(s, first_digit, last_digit);
	result = result_calculation(value, minus);

	return (result);
}




