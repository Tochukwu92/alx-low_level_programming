#include "main.h"
/**
 * main - Used to execute _putchar
 *
 * Description: Prints alphabet ten times
 */
void print_alphabet_x10(void)
{
	int num;
	char ch;

	num = 0;
	while (num <= 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	num++;
	}
}
