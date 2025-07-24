#include <unistd.h>
#include "main.h"

/**
 * _strcmp - Entry point
 * Description: compare two string
 * @s1 : string one to compare
 * @s2 : string two to compare
 * Return: -n/0/n if s1 is respectively less than, equal to or greater than s2.
 * with n the delta between ascii codes
 */

int _strcmp(char *s1, char *s2)
{
	/* declare and define variable */
	int i = 0;
	int n = 0;

	/* loop through two array and compare value */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/* calculating the difference between ascii codes */
		n = s1[i] - s2[i];

		/* if a difference is detected: end of loop and delta display */
		if (n != 0)
		{
			return (n);
		}
		i++;
	}

	/* if no difference detected then two identical strings so n = 0 */
	n = 0;
	return (n);

}

