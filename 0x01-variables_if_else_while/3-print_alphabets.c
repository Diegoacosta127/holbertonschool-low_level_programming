#include <stdio.h>
/**
  * main - main
  * Return: always 0
  */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (char ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	printf("\n");
}
