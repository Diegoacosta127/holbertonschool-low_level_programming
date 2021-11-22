#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
/**
  * read_textfile - reads a text file and prints it to the POSIX std output
  * @filename: file to read
  * @letters: number of letters it should read and print
  * Return: number of characters printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t ret;

	buf = malloc(sizeof(char) * letters);
	if (!buf || filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (letters == 0)
		return (0);
	ret = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (ret == -1)
		return (0);
	close(fd);
	free(buf);
	return (ret);
}
