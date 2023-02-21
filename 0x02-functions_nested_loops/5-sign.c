#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to print his sign
 *
 * Return: 1 if sign is positive
 * 0 if sign equal to zero
 * -1 if sign is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}

