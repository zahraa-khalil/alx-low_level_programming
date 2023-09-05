#include "main.h"

/**
 *create_file- function that creates a file.
 *@filename: filename
 *@text_content: a NULL terminated string to write to the file
 *Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	size_t text_length;
	ssize_t bytes_written;
    int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

    while (text_content[i] != '\0')
	{
		i++;
	}
    
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0666);

	if (fd == -1)
	{
		return (-1);
	}

	text_length = strlen(text_content);
	bytes_written = write(fd, text_content, text_length);

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}
    write(file, text_content, i);

	close(fd);
	return (0);
}
