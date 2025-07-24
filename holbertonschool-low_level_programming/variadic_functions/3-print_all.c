#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/* Define function for each type */

/**
 * print_char - print a char
 * @args: variadic arguments catched from main
 */
void print_char(va_list args)
{ /* char arguments are promoted to int in variadic function */
	/* so va_arg must use int to retrieve them. */
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print a int
 * @args: variadic arguments catched from main
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float
 * @args: variadic arguments catched from main
 */
void print_float(va_list args)
{/* float arguments are promoted to double in variadic function */
	/* so va_arg must use double to retrieve them. */
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string
 * @args: variadic arguments catched from main
 */
void print_string(va_list args)
{	/* catch value in a string */
	char *str = va_arg(args, char *);
		if (str == NULL)
		{	/* Replace NULL with “(nil)”. */
			str = "(nil)";
		}
	/* Display argument */
	printf("%s", str);
}

/**
 * print_all - Entry point prints anything
 * Description
 * @format: list of types of arguments passed to the function
 *   c: char
 *   i: integer
 *   f: float
 *   s: char
 * Exemple : print_all("ceis", 'B', 3, "stSchool");
 * Output : B, 3, stSchool
 * Return: void
 */
void print_all(const char * const format, ...)
{	/* Variable declaration and initialisation */
	int i = 0;
	int j;
	char *comma_sep = "";

	/* Correspondance table (type specifier and corresponding func) */
	char types[] = { 'c', 'i', 'f', 's', '\0' };
	/* Array of function pointers, each expecting a va_list argument */
	void (*print_func[])(va_list) = {
		print_char,		/* Prints a char */
		print_int,		/* Prints a integer */
		print_float,	/* Prints a float */
		print_string	/* Prints a string */
		};

	va_list args; /* Arguments list declaration */

	va_start(args, format); /* Initialize list with fixed arguments */

	/* 1st : check if format is not null; THEN if we not reach the end */
	while ((format != NULL) && (format[i] != '\0'))
	{
		j = 0; /* Reset index to loop through types table */
		while (types[j] != '\0')	/* loop in type table */
		{	/* check if we have a match between table and format */
			if (format[i] == types[j])
			{	/* first time print void comma_sep */
				/* second time, comma_sep is setup to ", "*/
				printf("%s", comma_sep);
				print_func[j](args); /* Call corresponding function */
				comma_sep = ", ";
				break; /* Exit loop after finding match */
			}
			j++; /* increment j */
		}
		i++; /* increment j */
	}

	printf("\n"); /* add new line in any case */
	va_end(args); /* Ends the use of the list */
}
