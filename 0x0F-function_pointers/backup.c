#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * get_op_func - selects the correct function to
  * perform the operation asked by the user
  * @s: operator
  * Return: pointer to int
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
	int i;

	i = 0;
	while (s[0] != ops[i].op[0] && i < 6)
	{
		i++;
	}
	if (i >= 5 || s[1])
	{
		printf("Error\n");
		exit(99);
	}
	return (*(ops[i].f));
}
