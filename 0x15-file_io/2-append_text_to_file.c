#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: string to append at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int num, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	num = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);
	if (num == -1 || w == -1)
		return (-1);
	close(num);
	return (1);
}
