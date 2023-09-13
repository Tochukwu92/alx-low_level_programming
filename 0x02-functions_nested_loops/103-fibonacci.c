#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms of a fibonacci sequence
 * Return: always return zero when successful
 */
int main(void)
{
	int x;
	unsigned long int y, z, n, sum;

	y = 1;
	z = 2;
	sum = 0;
	for (x = 1; x <= 33; ++x)
	{
		if (y < 4000000 && (y % 2) == 0)
		{
			sum += y;
		}
		n = y + z;
		y = z;
		z = n;
	}
	printf("%lu\n", sum);
	return (0);
}
