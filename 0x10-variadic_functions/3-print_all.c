#include "variadic_functions.h"

/**
 * print_all -  prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *s = "";

	va_list num;

	va_start(num, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(num, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(num, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(num, double));
					break;
				case 's':
					str = va_arg(num, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
		printf("\n");
	}
}
