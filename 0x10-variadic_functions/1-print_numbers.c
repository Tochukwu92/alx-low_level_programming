#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed
 * @n: number of argument passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(num, int));
		else if (separator && i == 0)
			printf("%d", va_arg(num, int));
		else
			printf("%d", va_arg(num, int));
	}
	va_end(num);
	printf("\n");
}
