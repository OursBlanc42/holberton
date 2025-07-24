#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * Description: Header file that contains prototypes functions.
 * This header ensures that the functions can be used in other files by
 * declaring it here, so other source files can include this header
 * and call it.
 */

/**
 * _putchar - writes the character c to stdout
 * @c: char to display
 * Return: int (ascii)
 */
int _putchar(char c);

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: callback
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: a pointer to the function you need to use
 * @size: size of the array
 * @action: callback
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - return index of the first element for which the cmp
 * function does not return 0
 * @array: a pointer to the function you need to use
 * @size: number of elements in the array array
 * @cmp: a pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int));



#endif


