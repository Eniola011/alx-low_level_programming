#include "main.h"

/**
 * append_text_to_file - a function that appends
 * text at the end of a file.
 * @filename: name of file.
 * @text_content: text content
 * Return: success (1), fail (-1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int _file;
	int letter;
	int _write;

	if (filename == NULL)
	{
		return (-1);
	}

	_file = open(filename, O_WRONLY | O_APPEND);

	if (_file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		_write = write(_file, text_content, letter);

		if (_write == -1)
		{
			return (-1);
		}
	}

	close(_file);

	return (1);
}
