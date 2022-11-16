#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 * @s: operator given by user
 * Return: pointer to the funtion that corrosponds to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x = 0;

	while (x < 5)
	{
		if (*(ops[x]).op == *s && *(s + 1) == '\0')
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
