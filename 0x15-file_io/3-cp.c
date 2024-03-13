#include "main.h"

/**
 * arg_check - A function that checks if the correct number
 * of arguments are entered
 * @argc: The number of args
 *
 * Return: Nothing
 */
void arg_check(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * read_check - checks readability of src file
 * @check: checks if true of false
 * @file: file_from name
 * @src: file descriptor of src
 * @dest: File descriptor of dest
 *
 * Return: Nothing
 */
void read_check(ssize_t check, char *file, int src, int dest)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (src != -1)
			close(src);
		if (dest != -1)
			close(dest);
		exit(98);
	}
}

/**
 * write_check - checks write operation from src to dest file
 * @check: checks if true of false
 * @file: file_to name
 * @src: File descriptor of src
 * @dest: file descriptor of dest
 *
 * Return: Nothing
 */
void write_check(ssize_t check, char *file, int src, int dest)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (src != -1)
			close(src);
		if (src != -1)
			close(dest);
		exit(99);
	}
}

/**
 * close_check - checks f closing is done normally
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: Nothing
 */
void close_check(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - A function that copies content
 * from one file to another file
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on successful execution
 */
int main(int argc, char *argv[])
{
	int src, dest, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	arg_check(argc);
	src = open(argv[1], O_RDONLY);
	read_check((ssize_t)src, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	write_check((ssize_t)dest, argv[2], src, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(src, buffer, 1024);
		read_check(lenr, argv[1], src, dest);
		lenw = write(dest, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		write_check(lenw, argv[2], src, dest);
	}
	close_to = close(dest);
	close_from = close(src);
	close_check(close_to, dest);
	close_check(close_from, src);
	return (0);
}
