#include "3-calc.h"

/**
 * main - main function
 * @argc: count number of argument entered
 * @argv: store argument entered
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *opt;

	num1 = atoi(av[1]);
	opt = av[2];
	num2 = atoi(av[3]);

	/* Check if arg exceed 4 or invalid operator */
	if (ac != 4 || get_op_func(opt) == NULL)
	{
		puts("Error");
		exit(98);
	}


	result = get_op_func(opt)(num1, num2);
	printf("%d\n", result);

	return 0;
}
