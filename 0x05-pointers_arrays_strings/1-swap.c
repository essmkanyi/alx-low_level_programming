#include "main.h"

/**
 * swap_int: function that swaps the two integers
 * @a = 1st integer
 * @b = 2nd integer
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
