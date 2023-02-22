#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @i: the number to print his last digit
 *
 * Return: return the last digit of i
 */
int print_last_digit(int i)
{
	int last_digit = i % 10;

	/* hundele negative number */
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}

