#include "main.h"

/**
 * print_sign - prints the sign of the number +ve / -ve
 * @n: number being checked
 * Return: 1 if >0, 0 if 0 and -1 < 0
 */

int print_sign(int n)
{
	char positive = '+';
	char negative = '-';
	char zero = '0';

	if (n > 0)
	{
		_putchar(positive);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);
		
		return (0);
	}
	else
	{
		_putchar(negative);

		return (-1);
	}
}
