#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *read_textfile- function that reads a text file and prints it
 * to the POSIX standard output.
 *@filename: filename
 *@letters: the number of letters it should read and print
 *Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	int fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}

	buffer = (char *) malloc(letters);

	if (buffer == NULL)
	{
		perror("Error allocating memory");
		close(fd);
		return (-1);
	}

	bytes_read = read(fd, buffer, letters);

	if (bytes_read == -1)
	{
		perror("Error reading file");
		free(buffer);
		close(fd);
		return (-1);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
		perror("Error writing to stdout");
		free(buffer);
		close(fd);
		return (-1);
	}

	free(buffer);
	close(fd);

	return (bytes_written);

	close(fd);
}
