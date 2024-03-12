#include "main.h"
/**
 * create_file - A function that create a file
 * @filename: Pointer to the actual name
 * @text_content: The contents of the file
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i, counter = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[counter])
			counter++;
		i = write(file, text_content, counter);
	}
	if (i == -1)
		return (-1);
	close(file);
	return (1);
}
