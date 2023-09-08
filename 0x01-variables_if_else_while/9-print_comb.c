#include <stdio.h>
/**
 * main - Execution starts here
 *
 * Return: Returns 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 0; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
