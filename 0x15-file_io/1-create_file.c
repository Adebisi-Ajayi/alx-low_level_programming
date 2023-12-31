#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - file name to create
 * @filename: file to open
 * @text_content: content of the file
 * Return: nothing
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		ssize_t text_length = strlen(text_content);
		ssize_t bytes_written = write(fd, text_content, text_length);

		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
