#include "3-calc.h"


/**
 * op_add - add two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: int 1
 * @b: int 2
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: int 1
 * @b: int 2
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: int 1
 * @b: int 2
 * Return: a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the modulo of two numbers
 * @a: int 1
 * @b: int 2
 * Return: remainder of a division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	return (a % b);
}
