#include "main.h"
/**
  * _abs - Computes the absolute value of an integer
  * @num: number to be checked
  * Return: the absolute value of the input
  */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
