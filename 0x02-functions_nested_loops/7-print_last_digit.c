#include "main.h"
/**
 * print_last_digit - print last digit
 *@m: variable to be checked
 * Return: last digit of number
 */
int print_last_digit(int m)
{
	int x;

	if (m < 0)
	{
		m = -m;
		x = m % 10;
	}
	if (x < 0)
	{
		x = -x;
		_putchar(x + '0');
	       return (x);	
	}
}
