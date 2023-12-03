#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 100
void stat_checker(int stat, int fd, char *filename, char mode);
/**
 * main - Function Copies content from one file to another
 * @argc: Counting the arguments passed to the func
 * @argv: The actual arguments apssed to the func
 * Return: 1 on success, or exit on failure
 */
int main(int argc, char *argv[])
{
	/*a: src, b: dest*/
	int a, b, n = 1024, n_write, close_a, close_b;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	a = open(argv[1], O_RDONLY);
	stat_checker(a, -1, argv[1], 'O');
	b = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	stat_checker(b, -1, argv[2], 'W');

	while (n == 1024)
	{
		n = read(a, buffer, sizeof(buffer));
		if (n == -1)
			stat_checker(-1, -1, argv[1], 'O');
		n_write = write(b, buffer, n);

		if (n_write == -1)
			stat_checker(-1, -1, argv[2], 'W');
	}
	close_a = close(a);
	stat_checker(close_a, a, NULL, 'C');
	close_b = close(b);
	stat_checker(close_b, b, NULL, 'C');
	return (0);
}
/**
 * stat_checker - Checking if file can be opened or closed
 * @stat: file descriptor - file to open
 * @fd: file descriptor - normal
 * @filename: Pointer to the actual file
 * @mode: To open and close a file
 * Return: void
 */
void stat_checker(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
