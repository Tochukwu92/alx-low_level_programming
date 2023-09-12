#include "main.h"
/**
 * _islower(int c) - Used to checks for lowercase character
 *
 * Return: Returns 1 if lowercase and 0 if uppercase
 * Description: c is a variable name
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
