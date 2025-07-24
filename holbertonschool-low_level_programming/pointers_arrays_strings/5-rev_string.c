#include <unistd.h>
#include "main.h"

/**
 * rev_string - Entry point
 * Description: reverse a string
 * @s : string to reverse
 * Return: reverse string
 */

void rev_string(char *s)
{
	/* declare and initialize variable */
	int start = 0;
	char temp = '\0';
	int end = 0;

	/* loop through chain until null charactere ('\0') */
	while (s[end] != '\0')
	{
		/* increment end for each character founded */
		end++;
	}

	/* adjust end */
	end = end - 1;

	/* perform swap */
	/* loop through chain in reverse until middle of the chain*/
	while (start < end)
	{
		/* swap with temp buffer */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* increment start */
		start++;

		/* decrement end */
		end--;
	}

}

