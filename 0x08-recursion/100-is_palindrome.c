#include "main.h"
/**
  * auxlen - calculates the length of the input string
  * @s: the input string
  * Return: the length
  */
int auxlen(char *s)
{
	if (*s)
	{
		return (auxlen(s + 1) + 1);
	}
	return (0);
}
/**
  * checkit - checks if the string is a palindrome using 2 pointers
  * @s: pointer, initially in the start
  * @t: pointer, initialy in the end
  * Return: 1 if it checks, otherwise 0
  */
int checkit(char *s, char *t)
{
	if (s == t || t < s)
	{
		return (1);
	}
	if (*s == *t)
	{
		return (checkit(s + 1, t - 1));
	}
	return (0);
}
/**
  * is_palindrome - checks if a string is a palindrome
  * @s: the string
  * Return: 1 if checks, otherwise 0
  */
int is_palindrome(char *s)
{
	char *last;

	last = s + auxlen(s) - 1;

	if (*s == 0)
	{
		return (1);
	}
	else
	{
		return (checkit(s, last));
	}
}
