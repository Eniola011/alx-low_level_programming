#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: what is inside the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int _open, _write, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	_write = write(_open, text_content, length);

	if (_open == -1 || _write == -1)
	{
		return (-1);
	}

	close(_open);

	return (1);
}
