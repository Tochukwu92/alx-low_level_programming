#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for (r -= 14; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
