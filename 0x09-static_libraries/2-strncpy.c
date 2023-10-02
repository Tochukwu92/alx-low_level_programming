#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: variabl to be copied to
 * @src: variable to copy
 * @n: number of byte
 * Return: return character
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
