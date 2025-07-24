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
 * print_alphabet - display alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - display alphabet x10 times
 */
void print_alphabet_x10(void);

/**
 * int _islower - checks for lowercase character. 
 */
int _islower(int c);

/**
 * int _islower - checks for lowercase character. 
 */
int _isalpha(int c);

/**
 * int print_sign - display sign of a number 
 */
int print_sign(int n);

/**
 * int _abs - display absolute value 
 */
int _abs(int n);

/**
 * int print_last_digit - print last digit
 */
int print_last_digit(int n);

/**
 * jack_bauer - prints every minute starting from 00:00 to 23:59.
 */
void jack_bauer(void);

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void);

/**
 * add - add int1 and int2 and return result
 */
int add(int, int);

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 */
void print_to_98(int n);

/**
 * print_times_table - prints all natural numbers from n to 98, followed by a new line.
 */
void print_times_table(int n);


#endif

