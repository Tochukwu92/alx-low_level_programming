#include "main.h"
/**
* swap_int - swap two integer
* @a: value to swap 1
* @b: value to swap 2
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
