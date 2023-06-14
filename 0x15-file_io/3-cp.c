#include "main.h"
#include <stdio.h>

/**
 * canopen_file - finds out if files can be opened.
 * @file_from: name of file
 * @file_to: name of file
 * @argv: args vector.
 * Return: no value
 */
void canopen_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - cross checks code
 * @argc: arg count
 * @argv: arg vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, cant_close;
	ssize_t data, _write;
	char _buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	canopen_file(file_from, file_to, argv);

	data = 1024;
	while (data == 1024)
	{
		data = read(file_from, _buffer, 1024);
		if (data == -1)
			canopen_file(-1, 0, argv);
		_write = write(file_to, _buffer, data);
		if (_write == -1)
			canopen_file(0, -1, argv);
	}

	cant_close = close(file_from);
	if (cant_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	cant_close = close(file_to);
	if (cant_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
