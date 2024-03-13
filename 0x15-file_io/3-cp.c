#include "main.h"
void checker(int fd, int state, char *filename, char mode);

/**
 * checker - Checking the file condition
 * @fd: The file descriptor
 * @state: State of the file fail or success
 * @filename: Pointer to the actual name
 * @mode: The mode of the file access
 */
void checker(int fd, int state, char *filename, char mode)
{
	if (mode == 'C' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && state == 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && state == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - A function that copies contents from one file to another file
 * @argc: Argumentys counting
 * @argv: Actual arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int src, dest, file_write;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];
	ssize_t n = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	checker(src, src, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	checker(dest, dest, argv[2], 'W');

	/*while ((n = read(src, buffer, sizeof(buffer))) > 0)*/
	while (n == 1024)
	{
		if (n == -1)
			checker(-1, -1, argv[1], 'O');
		file_write = write(dest, buffer, n);
		if (file_write == -1)
			checker(-1, -1, argv[2], 'W');
		if (file_write != n)
			checker(-1, -1, argv[2], 'W');
		/*continue;*/
	}
	close(src);
	close(dest);
	return (0);
}
