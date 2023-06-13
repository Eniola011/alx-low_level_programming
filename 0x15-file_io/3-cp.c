#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *do_buffer(char *_file);
void closefile(int _file);

/**
 * do_buffer - gives 1024 bytes for buffer
 * @_file: name of file
 * Return: pointer to new buffer
 */
char *do_buffer(char *_file)
{
	char *_buffer;

	_buffer = malloc(sizeof(char) * 1024);

	if (_buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", _file);
		exit(99);
	}

	return (_buffer);
}

/**
 * closefile - function to close file
 * @_file: name of file to be closed
 */
void closefile(int _file)
{
	int cf;

	cf = close(_file);

	if (cf == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close file %d\n", _file);
		exit(100);
	}
}

/**
 * main - copies the contents of a file to another file.
 * @argc: arg count
 * @argv: array pointer of arg
 * Return: success(0)
 * Description: If arg count is incorrect (exit code 97)
 * if file_from doesnt exist or cant be read (exit code 98)
 * if file_to cant be created or writtten (exit code 99)
 * if file_to/file_from cant be closed (exit code 100)
 */
int main(int argc, char *argv[])
{
	int _from, _to, _read, _write;
	char *_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_buffer = do_buffer(argv[2]);
	_from = open(argv[1], O_RDONLY);
	_read = read(_from, _buffer, 1024);
	_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (_from == -1 || _read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(_buffer);
			exit(98);
		}

		_write = write(_to, _buffer, _read);
		if (_to == -1 || _write == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(_buffer);
			exit(99);
		}

		_read = read(_from, _buffer, 1024);
		_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (_read > 0);

	free(_buffer);
	closefile(_from);
	closefile(_to);

	return (0);
}
