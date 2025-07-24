#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct function to perform operation
 * @s: mathematical operator
 * Return: NULL or result of the operation
 */

int (*get_op_func(char *s))(int, int)
{
	/* variable declaration */
	/* Declare an array call "ops" who contains op_t structures */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	/* loop through struct array (compare sign with input)*/
	while ((ops[i].op != NULL) && (*(ops[i].op) != *s))
	{
		i++;
	}
	/* Return operator function OR Null */
	return (ops[i].f);

}
