#include "main.h"

/**
 * _islower - test if a character is a lowercase or not
 * @c: the character to test
 *
 * Return: 1 if c is a lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

