#include "main.h"
/**
 * _strncat - concatenation of two strings
 *@dest: variable 1
 *@src: variable 2
 *@n: number of character to contactnate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
