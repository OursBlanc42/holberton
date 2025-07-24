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
 * malloc_checked - allocates memory using malloc.
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenate two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * string_nconcat - concatenate two strings.
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers.
 */
int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block using malloc and free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif


