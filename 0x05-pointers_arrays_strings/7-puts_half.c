#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: void
 *
 * owned by Hamza-cpp ( Hamza OKHADIR );
 */
void puts_half(char *str)
{
	int len = 0;
	int i, start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

