#include "main.h"

/**
 * _strlen_recursion - Entry point
 * Description: return the length of a string
 * @s: string to check
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	/* Check if we have not reached the end of the string */

	if (*s != '\0')
	{
		/*
		* Recursive call to move to the next character in the string.
		* Adds 1 for each character found until the end of the string.
		* Calls _strlen_recursion with (s + 1) to advance to the next
		* character in the string.
		*/
		return (1 + _strlen_recursion(s + 1));
	}

	else
	{
		/*
		* Base case: we've reached the end of the string ('\0').
		* Return 0 here to indicate no more characters to count.
		* This marks the end of recursion and starts the "unwinding"
		* phase where each previous call adds 1.
		*/
		return (0);
	}
}
