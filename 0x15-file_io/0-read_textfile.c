#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: filename
 * @letters:  number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t _open, _read, _write;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	_open = open(filename, O_RDONLY);
	_read = read(_open, buff, letters);
	_write = write(STDOUT_FILENO, buff, _read);

	if (_open == -1 || _read == -1 || _write == -1 || _write != _read)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(_open);

	return (_write);
}
