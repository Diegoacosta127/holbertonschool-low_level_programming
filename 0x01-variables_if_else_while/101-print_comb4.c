#include <stdio.h>
/**
  * main - ¡Basta chicos!
  * Return: always 0
  */
int main(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (a != b && b != c && c != a && a < b && b < c)
				{
					putchar(a + 48);
					putchar(b + 48);
					putchar(c + 48);
					if (a != 7)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
