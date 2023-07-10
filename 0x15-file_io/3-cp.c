#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *set_buffer(char *filename);
void closefile(int file_descript);

/**
 * set_buffer - allocate 1024 bytes
 * @filename: filename
 *
 * Return: pointer to new mem space.
 */
char *set_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * closefile - close a file
 * @file_descript: file descriptor
 * Return: no value
 */
void closefile(int file_descript)
{
	int f;

	f = close(file_descript);

	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descript);
		exit(100);
	}
}

/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: success(0)
 */
int main(int argc, char *argv[])
{
	int source, destination, _read, _write;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = set_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	_read = read(source, buf, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		_write = write(destination, buf, _read);
		if (destination == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		_read = read(source, buf, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);
	
	free(buf);
	closefile(source);
	closefile(destination);
	
	return (0);
}
