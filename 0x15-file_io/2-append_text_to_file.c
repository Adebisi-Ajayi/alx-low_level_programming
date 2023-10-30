#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - text file to append
 * @filename: filename to append
 * @text_content: append text content
 * Return: nothing
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int d;

	if (filename == NULL)
	{
		return (-1);
	}
	d = open(filename, O_WRONLY | O_APPEND);
	if (d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t text_length = strlen(text_content);
		ssize_t bytes_written = write(d, text_content, text_length);

		if (bytes_written == -1 || bytes_written != text_length)
		{
			close(d);
			return (-1);
		}
	}
	close(d);
	return (1);
}
