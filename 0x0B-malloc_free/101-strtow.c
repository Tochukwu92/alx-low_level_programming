#include "main.h"
#include <stdlib.h>

int wrds_len(char *str);
int wrds_count(char *str);
char **strtow(char *str);

/**
 * wrds_len - finds the last index of length of a word
 * @str: string
 * Return: integer
 */

int wrds_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * wrds_count - count the number of word in each strings
 * @str: string
 * Return: integer
 */

int wrds_count(char *str)
{
	int i = 0, wrd = 0, len = 0;

	for (i = 0; *(str + i); i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			wrd++;
			i += wrds_len(str + i);
		}
	}
	return (wrd);
}

/**
 * strtow - split a string into two
 * @str: string to split
 * Return: pointer
 */

char **strtow(char *str)
{
	char **string;
	int i = 0, wrd = 0, w, letter, l;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	wrd = wrds_count(str);
	if (wrd == 0)
	{
		return (NULL);
	}
	string = malloc(sizeof(char *) * (wrd + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < wrd; w++)
	{
		while (str[i] == ' ')
		{
			i++;
		}
		letter = wrds_len(str + i);
		string[w] = malloc(sizeof(char) * (letter + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
			{
				free(string[w]);
			}
			free(string);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
		{
			string[w][l] = str[i++];
		}
		string[w][l]  = '\0';
	}
	string[w] = NULL;
	return (string);
}
