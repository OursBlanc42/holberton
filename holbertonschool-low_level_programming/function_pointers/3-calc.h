#ifndef CALC_H
#define CALC_H

/*
 * File: calc.h
 * Description: Header file that contains prototypes functions.
 * This header ensures that the functions can be used in other files by
 * declaring it here, so other source files can include this header
 * and call it.
 */

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;


int (*get_op_func(char *s))(int, int);

/**
 * op_add - return the sum of a & b
 * @a: first number
 * @b: second number
 * Return: sum
 */
int op_add(int a, int b);

/**
 * op_sub - return the difference of a & b
 * @a: first number
 * @b: second number
 * Return: difference
 */
int op_sub(int a, int b);

/**
 * op_mul - return the product of a & b
 * @a: first number
 * @b: second number
 * Return: product
 */
int op_mul(int a, int b);

/**
 * op_div - return the div result of a & b
 * @a: first number
 * @b: second number
 * Return: div result
 */
int op_div(int a, int b);

/**
 * op_mod - return the div remainder of a & b
 * @a: first number
 * @b: second number
 * Return: div remainder
 */
int op_mod(int a, int b);


#endif
