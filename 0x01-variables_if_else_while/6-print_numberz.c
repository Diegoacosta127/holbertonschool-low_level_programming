#include <stdio.h>
/**
  * main - main
  * Return: always 0
  */
int main(void)
{
	char ch = '0';
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
