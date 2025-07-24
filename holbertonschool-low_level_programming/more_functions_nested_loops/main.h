#ifndef MAIN_H
#define MAIN_H

/* 
 * File: main.h
 * Description: Header file that contains prototypes functions.
 * This header ensures that the functions can be used in other files by
 * declaring it here, so other source files can include this header and call it.
 */

/**
 * _putchar - writes the character c to stdout
 */
int _putchar(char c);

/**
 * _isupper - Check for uppercase character 
 * (return 1 if uppercase & 0 otherwise)
 */
int _isupper(int c);

/**
 * _isdigit - Check for a digit (0 to 9) 
 * (return 1 if c is digit & 0 otherwise)
 */
int _isdigit(int c);

/**
 * mul - Multiplies two integers
 * (return result of multiplies)
 */
int mul(int a, int b);

/**
 * print_numbers - Print numbers from 0 to 9
 * (return 0)
 */
void print_numbers(void);

/**
 * print_most_numbers - Print numbers from 0 to 9 (except 2 and 4)
 * (return 0)
 */
void print_most_numbers(void);

/**
 * more_numbers - Print 10 times numbres from 0 to 14
 * (return 0)
 */
void more_numbers(void);

/**
 * print_line - Draw straight line in terminal with _ character
 * (return 0)
 */
void print_line(int n);

/**
 * print_line - Draw diagonal line in terminal with \ character
 * (return 0)
 */
void print_diagonal(int n);

/**
 * print_square - prints a square shape made with #
 * (return 0)
 */
void print_square(int size);

/**
 * print_square - prints a triangle shape made with #
 * (return 0)
 */
void print_triangle(int size);

#endif

