#include "main.h"
/**
  * print_to_98: prints all naturals from n to 98, followed by a new line
  * @i: iterator
  * Return: void
  */
void print_to_98(int n);
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%d", i);
				if (i != 98)
				{
					printf(", ");
				}
			}
		}
		else
		{
			printf("98");
		}
	}
}