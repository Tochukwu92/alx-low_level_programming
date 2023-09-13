#include "main.h"
/**
 * print_last_digit - print last digit
 *@m: variable to be checked
 * Return: last digit of number
 */
int print_last_digit(int m)
{
	int last_digit;

	if (m < 0)
	{
		last_digit = -1 * (m % 10);
	}
	else
	{
		last_digit = (m % 10);
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
