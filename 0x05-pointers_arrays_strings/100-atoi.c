#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the pointer to convert
 * Return: a integer
 */

int _atoi(char *s)
{
	int x = 0;
	unsigned int u = 0;
	int min = 1;
	int g = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			min *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			g = 1;
		u = (u * 10) + (s[x] - '0');
		x++;
		}
		if (g == 1)
		{
			break;
		}
		x++;
	}
	u *= min;
	return (u);
}
