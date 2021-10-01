#include <stdio.h>
/**
  * main - main, as always
  * Return: always 0
  */
int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + 48);
		if (ch != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
