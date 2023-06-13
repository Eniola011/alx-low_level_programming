#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of file.
 * @text_content: writed file.
 * Return: success (1), fail (-1)
 */
int create_file(const char *filename, char *text_content)
{
	int _file;
	int letter;
	int _write;

	if (filename == NULL)
	{
		return (-1);
	}

	_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (_file == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (letter = 0; text_content[letter]; letter++)
		;

	_write = write(_file, text_content, letter);

	if (_write == -1)
	{
		return (-1);
	}

	close(_file);

	return (1);
}
