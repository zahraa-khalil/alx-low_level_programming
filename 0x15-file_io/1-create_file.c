#include "main.h"

/**
 *create_file- reads a text file and prints it to the POSIX
 *@text_content: NULL terminated string to write to the file
 *@filename: name of the file to create
 *Return: actual number of letters it could read and print or 0
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
		length++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	write(fd, text_content, length);


	close(fd);

	return (1);
}
