#include "main.h"
/**
 * read_textfile - Reading from a text file
 * @filename: Represent the actual file
 * @letters: Number of letters
 * Return: Number of letters or 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file descrptr*/
	ssize_t file_read, file_write;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file_read = read(fd, filename, letters);
	if (file_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	file_write = write(STDOUT_FILENO, buffer, file_read);
	if (file_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (file_read);
}
