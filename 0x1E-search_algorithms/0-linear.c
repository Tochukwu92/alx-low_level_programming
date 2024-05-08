#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of integer
 * @size: size of the array
 * @value: search target
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (int)i;
	}
	return -1;
}
