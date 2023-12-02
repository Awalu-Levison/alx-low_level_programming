#include "main.h"
/**
 * read_textfile - A function that reads a text file and prints it to STDOUT
 * @filename: Pointer of character string
 * @letters: Number of letters to read and print
 * Return: Actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j; /*i: read, j: write*/
	char *str;
	int fd;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(cha) * letters);
	if (str == NULL)
		return (0);
	i = read(fd, str, letters);
	j = write(STDOUT_FILENO, str, i);

	close(fd);
	free(str);
	return (j);
}
