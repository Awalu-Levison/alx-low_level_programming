#include "main.h"
/**
 * append_text_to_file - Append text to a file
 * @filename: Pointer to the actual file
 * @text_content: Actual content of a file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int f;/*rwr*/

	if (!filename)
		return (-1);
	fd = open(filename, O_CREATE | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (n = 0; text_content[n], n++)
		;
	f = write(fd, text_content, n);
	if (f == -1)
		return (-1);
	close(fd);
	return (1);
}
