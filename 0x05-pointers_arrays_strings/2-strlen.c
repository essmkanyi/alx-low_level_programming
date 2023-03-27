#include "main.h"

/**
 * _strlen - a function
 * Description: returns the length of a string
 *
 * @s: string to get length of 
 * Return: length of the string
 */

int _strlen(char *s)
{
	int strl = 0;

	while(*s++)
	{
		strl++;
	}

	return (strl);
}
