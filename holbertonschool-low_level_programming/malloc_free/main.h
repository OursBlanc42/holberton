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
 * create_array - allocate and fill array with chars
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - dupliacte array and returns a pointer to a newly allocated
 * space in memory,
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings.
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height);

/**
 * frees a 2 dimensional grid previously created by your alloc_grid function.
 */
void free_grid(int **grid, int height);

#endif

