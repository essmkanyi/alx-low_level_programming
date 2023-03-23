#include "main.h"

/**
 * _isalpha - checks if c is alphabetic or not
 * @c: character to be checked
 * Return: 1 if it is a letter, lowercase or uppercase; 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
