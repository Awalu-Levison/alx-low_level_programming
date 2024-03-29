#include "main.h"
/**
 * append_text_to_file - A function that append text to a file
 * @filename: Pointer to the actual file
 * @text_content: Actual content of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, file_write; /*fd: file descrptr*/
	ssize_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	if (len < 0)
	{
		close(fd);
		return (-1);
	}

	file_write = write(fd, text_content, len);

	if (file_write == -1 || file_write != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
