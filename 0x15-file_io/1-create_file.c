#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
  * create_file - creates a file
  * @filename: name of the file to be created
  * @text_content: string to be written on the file terminated in NULL
  * Return: 1 if works fine, -1 if there's some failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd, lentc, valwr;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1 || !filename)
		return (-1);
	lentc = 0;
	valwr = 0;
	if (text_content)
	{
		lentc = strlen(text_content);
		valwr = write(fd, text_content, lentc);
	}
	close(fd);
	if (valwr != lentc)
		return (-1);
	return (1);
}
