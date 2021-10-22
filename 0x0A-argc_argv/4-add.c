#include <stdlib.h>
#include <stdio.h>
/**
  * main - adds positive numbers
  * @argc: argument counter
  * @argv: argument vector
  * Return: 1 if some arguments contains symbol that aren't digits, otherwise 0
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int sum, i, j;

		sum = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
