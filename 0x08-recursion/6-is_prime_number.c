#include "main.h"
/**
  * aux - auxiliar function
  * @a: integer
  * @b: integer
  * Return: 1 if a is prime, otherwise 0
  */
int aux(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	else
	{
		if (b > 0 && a % b == 0)
		{
			return (0);
		}
		else
		{
			return (aux(a, b - 1));
		}
	}
}

/**
  * is_prime_number - calculates if a number is prime
  * @n: the number
  * Return: 1 if n is prime, otherwise 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (aux(n, n - 1));
}
