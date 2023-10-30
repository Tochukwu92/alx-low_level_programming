#include "main.h"

/**
 * create_file - Creates a file
 * @filename:  file to be created
 * @text_content: a string to write to the file.
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int num, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	num = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(num, text_content, len);

	if (num == -1 || w == -1)
		return (-1);

	close(num);

	return (1);
}
