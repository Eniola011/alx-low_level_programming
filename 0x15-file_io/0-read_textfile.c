#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text files, prints letters
 * @filename: name of file.
 * @letters: letters to be printed
 * Return: returns the actual number of letters it
 * could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _file;
	ssize_t _read, _write;
	char *_buffer;

	if (filename == NULL)
	{
		return (0);
	}

	_file = open(filename, O_RDONLY);

	if (_file == -1)
	{
		return (0);
	}

	_buffer = malloc(sizeof(char) * letters);
	if (_buffer == NULL)
	{
		return (0);
	}

	_read = read(_file, _buffer, letters);
	_write = write(STDOUT_FILENO, _buffer, _read);

	close(_file);

	free(_buffer);

	return (_write);
}
