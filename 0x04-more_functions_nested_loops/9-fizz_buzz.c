#include <stdio.h>
/**
  * main - prints the numbers from 1 to 100, followed by a new line, n%3="Fizz", n%5="Buzz"
  * Return: always 0
  */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		else
		{
			if (i % 3 == 0)
				printf("Fizz");
			if (i % 5 == 0)
				printf("Buzz");
		}
		printf(" ");
	}
	putchar(10);
	return (0);
}
