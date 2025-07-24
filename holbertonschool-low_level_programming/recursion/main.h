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
 * prints a string, followed by a new line.
 */
void _puts_recursion(char *s);

/**
 * prints a string in reverse.
 */
void _print_rev_recursion(char *s);

/**
 * returns the length of a string.
 */
int _strlen_recursion(char *s);

/**
 * returns the factorial of a given number.
 */
int factorial(int n);

/**
 * returns the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y);

/**
 * returns the natural square root of a number.
 */
int _sqrt_recursion(int n);

/**
 * returns 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n);

#endif

