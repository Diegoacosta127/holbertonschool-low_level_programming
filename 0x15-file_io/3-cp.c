#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
void _close(int);
void file_to_str(int, int, char **);
/**
  * main - copies the content of a file to another
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if works fine
  */
int main(int argc, char **argv)
{
	int file_from, file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (file_to < 0)
		file_to = open(argv[2], O_TRUNC | O_WRONLY);
	if (file_to == -1)
	{
		_close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	file_to_str(file_from, file_to, argv);
	_close(file_from);
	_close(file_to);
	return (0);
}
/**
  * _close - close file with error
  * @file: file to be closed
  * Return: void
  */
void _close(int file)
{
	int a;

	a = close(file);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
  * file_to_str - save file content in a string
  * @file_from: file to copy
  * @file_to: pointer to buffer
  * @files: size of file
  * Return: void
  */
void file_to_str(int file_from, int file_to, char **files)
{
	int lenrd, lenwr;
	char buf[1024];

	lenrd = 1024;
	while (lenrd == 1024)
	{
		lenrd = read(file_from, buf, sizeof(buf));
		if (lenrd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", files[1]);
			_close(file_from);
			_close(file_to);
			exit(98);
		}
		lenwr = write(file_to, buf, lenrd);
		if (lenwr == -1)
		{
			_close(file_from);
			_close(file_to);
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", files[2]);
			exit(99);
		}
	}
}
