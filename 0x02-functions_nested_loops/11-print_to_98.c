#include "main.h"
/**
  * print_to_98: prints all naturals from n to 98, followed by a new line
  * Return: void
  */
void print_to_98(int n);
{
	while(n!=98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("98");
}
