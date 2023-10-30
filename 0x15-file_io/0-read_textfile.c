#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters in the file
 * Return: number of letters in the file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t str;
	ssize_t w;
	ssize_t t;

	str = open(filename, O_RDONLY);
	if (str == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(str, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(str);
	return (w);
}
