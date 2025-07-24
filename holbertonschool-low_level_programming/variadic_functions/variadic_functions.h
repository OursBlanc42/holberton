#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Description: Header file that contains prototypes functions.
 * This header ensures that the functions can be used in other files by
 * declaring it here, so other source files can include this
 * header and call it.
 */

/**
 * _putchar - writes the character c to stdout
 * @c: char to display
 * Return: int (ascii)
 */
int _putchar(char c);

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: first fix argument
 * Return: sum of all parameters unless n == 0 in which case 0
 */
int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of int passed to the functions
 * Return: prints numbers with separator or nothing if separator is null
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings, followed by a new line.
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * @separator: string to be printed between string
 * @n: number of int passed to the functions
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...);


/**
 * print_all - prints anything.
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
void print_all(const char * const format, ...);

#endif

