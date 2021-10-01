#include <stdio.h>
/**
  * main - 100 main
  * Return: always 0
  */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b && a < b)
			{
				putchar(a + 48);
				putchar(b + 48);
				if (a != 8)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
