#include "main.h"
/**
  * aux - auxiliar function
  * @a: input
  * @b: input
  * Return: integer
  */
int aux(int b, int a)
{
	if (a * a == b)
	{
		return (a);
	}
	else
	{
		if (a * a > b)
		{
			return (-1);
		}
		else
		{
			return(aux(b, a + 1));
		}
	}
}

/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number
  * Return: an integer, -1 if n hasn't a natural square root
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (aux(n, 0));
		}
	}
}
