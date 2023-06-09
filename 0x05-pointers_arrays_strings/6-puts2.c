#include "main.h"

/**
 * puts2 - Prints one char out of two of a string.
 *
 * @str: The string argument passed.
 */
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		putchar(str[i]);

	putchar('\n');
}
