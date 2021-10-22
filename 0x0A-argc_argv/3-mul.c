#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0 if receives |2 arguments, otherwise 1
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
