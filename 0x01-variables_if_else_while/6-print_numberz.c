#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Returns 0
 */
int main(void)
{
	int v = 0;

	while (v < 10)
	{
		putchar(v + '0');
		v++;
	}
	putchar('\n');
	return (0);
}
