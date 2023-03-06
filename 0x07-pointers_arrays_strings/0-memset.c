#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to put constant
 * @b: constant byte
 * @n: size of the memory area pointed by s
 *
 * Rerurn: ponter to memory area s
 * Owned by Hamza-cpp (Hamza OKHADIR);
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

