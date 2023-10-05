#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: integer
 * @av: string pointer
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
	int a = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (x < ac)
	{
		while (av[x][y])
		{
			a++;
			y++;
		}
		y = 0;
		x++;
	}
	s = malloc((a * sizeof(char)) + ac + 1);
	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[z] = av[x][y];
			z++;
			y++;
		}
		s[z] = '\n';
		y = 0;
		z++;
		x++;
	}
	z++;
	s[z] = '\0';
	return (s);
}
