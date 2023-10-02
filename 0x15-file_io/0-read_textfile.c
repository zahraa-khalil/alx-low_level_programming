#include "main.h"

/**
 *read_textfile- reads a text file and prints it to the POSIX
 *@letters: number of letters it should read and print
 *@filename: the name of the file
 *Return: actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fileData, i;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = (char *) malloc(letters * sizeof(char));

	if (buf == NULL)
	{
		return (0);
	}

	fileData = read(fd, buf, letters);

	if (fileData == -1)
	{
		free(buf);
		return (0);
	}

	for (i = 0; i < fileData; i++)
	{
		_putchar(buf[i]);
	}

	free(buf);
	close(fd);

	return (fileData);
}
