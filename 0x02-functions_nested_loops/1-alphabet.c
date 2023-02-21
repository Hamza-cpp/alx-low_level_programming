#include "main.h"
/**
 * print_alphabet - write the lowercase alphabet to stdout
 *
 * return: no return
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

