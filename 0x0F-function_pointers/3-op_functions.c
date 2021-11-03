#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * op_add - returns the sum of 2 integers
  * @a: an operand
  * @b: another operand
  * Return: a + b
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - returns the difference of 2 integers
  * @a: an operand
  * @b: another operand
  * Return: a - b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - returns the product of 2 integers
  * @a: an operand
  * @b: another operand
  * Return: a * b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - returns the division of 2 integers
  * @a: an operand
  * @b: another operand
  * Return: exits 100 if b == 0; otherwise a / b
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
  * op_mod - returns the remainder of the division of 2 integers
  * @a: an operand
  * @b: another operand
  * Return: exits 100 if b == 0; otherwise a % b
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
