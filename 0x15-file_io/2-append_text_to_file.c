#include "main.h"

/**
 * append_text_to_file - adds more text to file
 * @filename: filename
 * @text_content: what is inside file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

		_open = open(filename, O_WRONLY | O_APPEND);
		_write = write(_open, text_content, length);

		if (_open == -1 || _write == -1)
		{
			return (-1);
		}
	}

	close(_open);
	return (1);
}
