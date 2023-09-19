#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int r = 0,i = 0;

	while (s[i] != '\0')
	{
		r++;
	}
	for (i = r - 1; r >= 0; r--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
